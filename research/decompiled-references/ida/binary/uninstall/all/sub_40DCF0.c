_DWORD *__fastcall sub_40DCF0(unsigned __int8 *a1, __int64 a2, char a3, __int64 *a4, int a5, int a6)
{
  _DWORD *result; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // rdx
  unsigned __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // edx
  int v21; // eax
  double v22; // [rsp+0h] [rbp-58h] BYREF
  float dest; // [rsp+8h] [rbp-50h] BYREF
  int v24; // [rsp+Ch] [rbp-4Ch] BYREF
  _BYTE v25[40]; // [rsp+10h] [rbp-48h] BYREF

  switch ( (int)a2 )
  {
    case 'I':
    case 'i':
    case 'n':
      if ( (unsigned int)sub_40DA70(a2, a2, a3, (int)a4, a5, a6) )
      {
        LODWORD(v10) = (a1[2] << 16) + (a1[1] << 8) + *a1;
        v18 = a1[3];
      }
      else
      {
        LODWORD(v10) = (a1[1] << 16) + (a1[2] << 8) + a1[3];
        v18 = *a1;
      }
      v10 = (int)v10;
      v19 = v18 << 24;
      v15 = (int)v10 + v19;
      if ( (a3 & 1) != 0 )
      {
        v13 = (int)v10 + v19;
        return (_DWORD *)sub_47CDC0(v13, a2, v10);
      }
      if ( (((__int64)v15 > 0) & (unsigned int)(v15 >> 31)) != 0 )
        v15 -= 0x100000000LL;
      goto LABEL_11;
    case 'Q':
    case 'd':
    case 'q':
      sub_40DAE0(a1, &v22, 8u, a2, a5, a6);
      return (_DWORD *)sub_47B930(v22);
    case 'R':
    case 'f':
    case 'r':
      sub_40DAE0(a1, &dest, 4u, a2, a5, a6);
      return (_DWORD *)sub_47B930(dest);
    case 'S':
    case 's':
    case 't':
      if ( (unsigned int)sub_40DA70(a2, a2, a3, (int)a4, a5, a6) )
      {
        v20 = *a1;
        v21 = a1[1];
      }
      else
      {
        v20 = a1[1];
        v21 = *a1;
      }
      v15 = (v21 << 8) + v20;
      if ( (a3 & 1) == 0 && (__int16)(((_WORD)v21 << 8) + v20) < 0 )
        v15 |= 0xFFFFFFFFFFFF0000LL;
      goto LABEL_11;
    case 'W':
    case 'm':
    case 'w':
      if ( (unsigned int)sub_40DA70(a2, a2, a3, (int)a4, a5, a6) )
      {
        v11 = ((unsigned __int64)a1[6] << 48)
            | ((unsigned __int64)a1[5] << 40)
            | ((unsigned __int64)a1[4] << 32)
            | ((unsigned __int64)a1[3] << 24)
            | ((unsigned __int64)a1[2] << 16)
            | *(unsigned __int16 *)a1;
        v12 = a1[7];
      }
      else
      {
        v11 = ((unsigned __int64)a1[1] << 48)
            | ((unsigned __int64)a1[2] << 40)
            | ((unsigned __int64)a1[3] << 32)
            | ((unsigned __int64)a1[4] << 24)
            | ((unsigned __int64)a1[5] << 16)
            | ((unsigned __int64)a1[6] << 8)
            | a1[7];
        v12 = *a1;
      }
      v13 = (v12 << 56) | v11;
      if ( (a3 & 1) == 0 )
        return (_DWORD *)sub_47CDC0(v13, a2, v10);
      sub_4A65A0(v25, v13);
      return (_DWORD *)sub_47CCC0(v25, v13, v14);
    case 'c':
      v15 = *a1;
      if ( (a3 & 1) == 0 && (v15 & 0x80u) != 0LL )
        v15 |= 0xFFFFFFFFFFFFFF00LL;
LABEL_11:
      v16 = *a4;
      if ( !*a4 )
        return (_DWORD *)sub_47BE30(v15);
      v17 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, int *))(v16 + 72))(*a4, v15, &v24);
      if ( !v24 )
        return *(_DWORD **)(v17 + 24);
      if ( *(int *)(v16 + 44) <= 260 )
      {
        result = (_DWORD *)sub_47BE30(v15);
        ++*result;
        *(_QWORD *)(v17 + 24) = result;
      }
      else
      {
        sub_40DC90(v16);
        *a4 = 0;
        return (_DWORD *)sub_47BE30(v15);
      }
      return result;
    default:
      return nullptr;
  }
}

