unsigned __int64 __fastcall sub_3D9720(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  int v6; // r12d
  int v8; // r12d
  int v9; // ebp
  void *v11; // r13
  unsigned __int64 v12; // r8
  char v13; // al
  __int64 v14; // r8
  char *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+8h] [rbp-60h]
  unsigned __int64 v23; // [rsp+8h] [rbp-60h]
  _BYTE v24[2]; // [rsp+10h] [rbp-58h] BYREF
  _WORD v25[8]; // [rsp+12h] [rbp-56h] BYREF
  char v26; // [rsp+22h] [rbp-46h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v5 = (_QWORD *)*a1;
  v6 = *((_DWORD *)a1 + 60);
  v27 = __readfsqword(0x28u);
  v8 = v6 & 0x4000000;
  v9 = sub_3E8930(*v5);
  if ( v9 || !v8 )
  {
    v11 = (void *)node2ea(a2);
    if ( sub_3BD540(*a1, (__int64)v11) )
    {
      v12 = sub_3BE900((_QWORD *)*a1, (unsigned __int64)v11, 0);
      if ( (v12 & 0x600) == 0x400 && (v12 & 0xF0000000) == 0xD0000000
        || (v22 = v12, v13 = is_custfmt(v12, 15), v12 = v22, v13) )
      {
        v23 = v12;
        sub_3E9590(v24, a3, a4);
        v14 = v23;
        if ( v9 )
        {
          v15 = (char *)v25;
          while ( *(_WORD *)v15 )
          {
            v15 += 2;
            if ( &v26 == v15 )
              goto LABEL_11;
          }
          v19 = a1[12];
          v20 = a1[11];
          if ( a1[13] < (unsigned __int64)(v19 + 1) )
          {
            v21 = qvector_reserve(a1 + 11, v20, v19 + 1, 8);
            v14 = v23;
            a1[11] = v21;
            v20 = v21;
            v19 = a1[12];
          }
          *(_QWORD *)(v20 + 8 * v19) = v11;
          ++a1[12];
        }
LABEL_11:
        if ( !v8 )
        {
          if ( v25[0] > 0 )
            v14 |= 0xD00000uLL;
          if ( v25[1] > 0 )
            v14 |= 0xD000000uLL;
          sub_3D07C0((_QWORD *)*a1, v11, v14);
        }
      }
    }
    else
    {
      v16 = a1[15];
      v17 = a1[14];
      if ( a1[16] < (unsigned __int64)(v16 + 1) )
      {
        v18 = qvector_reserve(a1 + 14, v17, v16 + 1, 8);
        a1[14] = v18;
        v17 = v18;
        v16 = a1[15];
      }
      *(_QWORD *)(v17 + 8 * v16) = v11;
      ++a1[15];
    }
  }
  return v27 - __readfsqword(0x28u);
}
