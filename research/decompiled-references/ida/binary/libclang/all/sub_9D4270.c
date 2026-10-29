__int64 __fastcall sub_9D4270(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v5; // rax
  unsigned __int8 *v6; // r13
  _QWORD *v7; // r12
  _BYTE *v8; // rdx
  __int64 v9; // rax
  __int64 *v10; // rbp
  __int64 result; // rax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // r14
  void *v18; // rdi
  __int64 v19; // [rsp+8h] [rbp-50h] BYREF
  __int64 v20; // [rsp+10h] [rbp-48h] BYREF
  char v21; // [rsp+18h] [rbp-40h]

  v19 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  v5 = sub_A2E0C0(a1, &v19, 2300, 1);
  if ( v5 )
  {
    v6 = *(unsigned __int8 **)v5;
    v7 = (_QWORD *)v5;
    if ( !*(_QWORD *)v5 )
    {
      v12 = *(_QWORD *)(v5 + 8);
      v13 = *(_DWORD *)(v12 + 14976);
      if ( v13 )
      {
        v14 = (unsigned int)(v13 - 1);
        *(_DWORD *)(v12 + 14976) = v14;
        v6 = *(unsigned __int8 **)(v12 + 8 * v14 + 14848);
        v15 = *((unsigned int *)v6 + 134);
        *v6 = 0;
        v16 = *((_QWORD *)v6 + 66);
        *((_DWORD *)v6 + 106) = 0;
        v17 = v16 + (v15 << 6);
        while ( v16 != v17 )
        {
          while ( 1 )
          {
            v17 -= 64;
            v18 = *(void **)(v17 + 24);
            if ( v18 == (void *)(v17 + 40) )
              break;
            operator delete(v18, *(_QWORD *)(v17 + 40) + 1LL);
            if ( v16 == v17 )
              goto LABEL_12;
          }
        }
LABEL_12:
        *((_DWORD *)v6 + 134) = 0;
      }
      else
      {
        v6 = (unsigned __int8 *)operator new(0x3A0u);
        *v6 = 0;
        *((_QWORD *)v6 + 12) = v6 + 112;
        *((_QWORD *)v6 + 16) = v6 + 144;
        *((_QWORD *)v6 + 20) = v6 + 176;
        *((_QWORD *)v6 + 24) = v6 + 208;
        *((_QWORD *)v6 + 28) = v6 + 240;
        *((_QWORD *)v6 + 32) = v6 + 272;
        *((_QWORD *)v6 + 36) = v6 + 304;
        *((_QWORD *)v6 + 40) = v6 + 336;
        *((_QWORD *)v6 + 44) = v6 + 368;
        *((_QWORD *)v6 + 48) = v6 + 400;
        *((_QWORD *)v6 + 13) = 0;
        v6[112] = 0;
        *((_QWORD *)v6 + 17) = 0;
        v6[144] = 0;
        *((_QWORD *)v6 + 21) = 0;
        v6[176] = 0;
        *((_QWORD *)v6 + 25) = 0;
        v6[208] = 0;
        *((_QWORD *)v6 + 29) = 0;
        v6[240] = 0;
        *((_QWORD *)v6 + 33) = 0;
        v6[272] = 0;
        *((_QWORD *)v6 + 37) = 0;
        v6[304] = 0;
        *((_QWORD *)v6 + 41) = 0;
        v6[336] = 0;
        *((_QWORD *)v6 + 45) = 0;
        v6[368] = 0;
        *((_QWORD *)v6 + 49) = 0;
        v6[400] = 0;
        *((_QWORD *)v6 + 52) = v6 + 432;
        *((_QWORD *)v6 + 53) = 0x800000000LL;
        *((_QWORD *)v6 + 66) = v6 + 544;
        *((_QWORD *)v6 + 67) = 0x600000000LL;
      }
      *v7 = v6;
    }
    v6[*v6 + 1] = 10;
    v8 = (_BYTE *)*v7;
    v9 = *(unsigned __int8 *)*v7;
    *v8 = v9 + 1;
    *(_QWORD *)&v8[8 * v9 + 16] = a3;
  }
  v10 = (__int64 *)sub_A2DD70(a1, a3[6], 105);
  result = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a3 + 16LL))(a3);
  if ( v10 )
  {
    v20 = result;
    v21 = 1;
    return sub_839C90(v10, &v20);
  }
  return result;
}

