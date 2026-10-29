__int64 __fastcall sub_E99720(__int64 a1, _BYTE ***a2, _QWORD *a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  __int64 v9; // r14
  unsigned __int8 *v10; // rbx
  unsigned __int8 *v11; // rdx
  __int64 v12; // rax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 v19; // r12
  void *v20; // rdi
  __int64 v21; // [rsp+4h] [rbp-94h] BYREF
  char v22; // [rsp+Ch] [rbp-8Ch]
  unsigned __int8 *v23; // [rsp+10h] [rbp-88h] BYREF
  __int64 v24; // [rsp+18h] [rbp-80h]

  sub_FC70B0(&v23, *a3, a4, 2514);
  v9 = a6;
  sub_AEC220(&v23, **a2, (signed __int64)(*a2)[1]);
  v21 = a5;
  v22 = 1;
  sub_AEC610((__int64 *)&v23, &v21);
  v10 = v23;
  if ( !v23 )
  {
    v14 = v24;
    v15 = *(_DWORD *)(v24 + 14976);
    if ( v15 )
    {
      v16 = (unsigned int)(v15 - 1);
      *(_DWORD *)(v24 + 14976) = v16;
      v10 = *(unsigned __int8 **)(v14 + 8 * v16 + 14848);
      v17 = *((unsigned int *)v10 + 134);
      *v10 = 0;
      v18 = *((_QWORD *)v10 + 66);
      *((_DWORD *)v10 + 106) = 0;
      v19 = v18 + (v17 << 6);
      while ( v18 != v19 )
      {
        while ( 1 )
        {
          v19 -= 64;
          v20 = *(void **)(v19 + 24);
          if ( v20 == (void *)(v19 + 40) )
            break;
          operator delete(v20);
          if ( v18 == v19 )
            goto LABEL_10;
        }
      }
LABEL_10:
      *((_DWORD *)v10 + 134) = 0;
    }
    else
    {
      v10 = (unsigned __int8 *)operator new(0x3A0u);
      *v10 = 0;
      *((_QWORD *)v10 + 12) = v10 + 112;
      *((_QWORD *)v10 + 16) = v10 + 144;
      *((_QWORD *)v10 + 20) = v10 + 176;
      *((_QWORD *)v10 + 24) = v10 + 208;
      *((_QWORD *)v10 + 28) = v10 + 240;
      *((_QWORD *)v10 + 32) = v10 + 272;
      *((_QWORD *)v10 + 36) = v10 + 304;
      *((_QWORD *)v10 + 40) = v10 + 336;
      *((_QWORD *)v10 + 44) = v10 + 368;
      *((_QWORD *)v10 + 48) = v10 + 400;
      *((_QWORD *)v10 + 52) = v10 + 432;
      *((_QWORD *)v10 + 13) = 0;
      v10[112] = 0;
      *((_QWORD *)v10 + 17) = 0;
      v10[144] = 0;
      *((_QWORD *)v10 + 21) = 0;
      v10[176] = 0;
      *((_QWORD *)v10 + 25) = 0;
      v10[208] = 0;
      *((_QWORD *)v10 + 29) = 0;
      v10[240] = 0;
      *((_QWORD *)v10 + 33) = 0;
      v10[272] = 0;
      *((_QWORD *)v10 + 37) = 0;
      v10[304] = 0;
      *((_QWORD *)v10 + 41) = 0;
      v10[336] = 0;
      *((_QWORD *)v10 + 45) = 0;
      v10[368] = 0;
      *((_QWORD *)v10 + 49) = 0;
      v10[400] = 0;
      *((_QWORD *)v10 + 53) = 0x800000000LL;
      *((_QWORD *)v10 + 66) = v10 + 544;
      *((_QWORD *)v10 + 67) = 0x600000000LL;
    }
    v23 = v10;
  }
  v10[*v10 + 1] = 2;
  v11 = v23;
  v12 = *v23;
  *v23 = v12 + 1;
  *(_QWORD *)&v11[8 * v12 + 16] = v9;
  sub_FC70F0(a1, &v23);
  sub_AEA040((__int64)&v23);
  return a1;
}
