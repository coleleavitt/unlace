void __fastcall sub_8247C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r12
  _QWORD *v11; // rdx
  unsigned int v12; // esi
  __int64 *v13; // r12
  char v14; // r15
  __int64 v15; // rax
  unsigned int v16; // edx
  void *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // rbx
  void *v23; // rax
  void *v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // edx
  void *v29; // [rsp+10h] [rbp-98h] BYREF
  unsigned int v30; // [rsp+18h] [rbp-90h]
  char v31; // [rsp+1Ch] [rbp-8Ch]
  void *v32; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v33; // [rsp+28h] [rbp-80h]
  char v34; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v35; // [rsp+30h] [rbp-78h] BYREF
  char v36; // [rsp+34h] [rbp-74h]
  void *v37; // [rsp+38h] [rbp-70h]
  unsigned int v38; // [rsp+40h] [rbp-68h]
  char v39; // [rsp+44h] [rbp-64h]

  v6 = a4;
  v8 = *(_QWORD **)(a1 + 16);
  if ( (a4 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    v6 = *(_QWORD *)(a2 + 8);
  v9 = sub_6D9A50(v8, v6);
  if ( !v9 || (unsigned int)*(unsigned __int8 *)(v9 + 16) - 2 > 1 )
    BUG();
  v10 = *(_QWORD *)(v9 + 32);
  v11 = *(_QWORD **)(v9 + 40);
  if ( (*(_BYTE *)(v9 + 19) & 2) != 0 )
  {
    if ( *((_DWORD *)v11 + 2) <= 0x40u )
      v11 = (_QWORD *)*v11;
    else
      v11 = *(_QWORD **)*v11;
  }
  v12 = *(_DWORD *)(a2 + 16);
  v35 = 0;
  if ( (unsigned int)v11 <= v12 )
    v12 = (unsigned int)v11;
  v36 &= ~1u;
  sub_6A3820((__int64)&v35, v12, (int)v11);
  sub_6A01B0(a3, (__int64)&v35);
  if ( v35 > 1 )
    sub_69F740((__int64)&v35);
  v13 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = sub_B0FF70(*v13);
  v30 = sub_6F6DE0(*(_QWORD *)(a1 + 16), *v13);
  if ( v30 > 0x40 )
    sub_2585A50(&v29, 0, 0);
  else
    v29 = nullptr;
  v31 = v14;
  v15 = *(unsigned int *)(a3 + 16);
  if ( *(_DWORD *)(a3 + 20) != (_DWORD)v15 )
  {
    v16 = v30;
    v33 = v30;
    if ( v30 > 0x40 )
    {
      sub_2585B30(&v32);
      v15 = *(unsigned int *)(a3 + 16);
      v14 = v31;
      v16 = v33;
      v17 = v32;
    }
    else
    {
      v17 = v29;
      v32 = v29;
    }
    v38 = v16;
    v18 = 7 * v15;
    v19 = *(_QWORD *)(a3 + 8);
    v36 &= ~1u;
    v34 = v14;
    v35 = 2;
    v33 = 0;
    v37 = v17;
    v39 = v14;
    sub_6A01B0(v19 + 8 * v18, (__int64)&v35);
    if ( v35 > 1 )
      sub_69F740((__int64)&v35);
    if ( v33 > 0x40 && v32 )
      operator delete[](v32);
    LODWORD(v15) = *(_DWORD *)(a3 + 16);
  }
  v20 = (unsigned int)v15;
  v21 = 0;
  v22 = 0;
  if ( (_DWORD)v15 )
  {
    do
    {
      if ( ((*(_WORD *)(a2 + 2) >> 6) & 7) == 2 )
      {
        v27 = *(unsigned __int16 *)(a2 + 2 * v22 + 4LL * *(unsigned int *)(a2 + 4) + 20);
      }
      else
      {
        v26 = *(unsigned int *)(a2 + 4);
        if ( ((*(_WORD *)(a2 + 2) >> 6) & 7) == 4 )
          v27 = *(unsigned int *)(a2 + 4 * (v22 + v26) + 20);
        else
          v27 = *(unsigned __int8 *)(v22 + a2 + 4 * v26 + 20);
      }
      v28 = v30;
      if ( v30 <= 0x40 )
      {
        v23 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v30) & v27);
        if ( !v30 )
          v23 = nullptr;
        v29 = v23;
      }
      else
      {
        *(_QWORD *)v29 = v27;
        memset((char *)v29 + 8, 0, 8 * (unsigned int)(((unsigned __int64)v30 + 63) >> 6) - 8);
        v28 = v30;
        v33 = v30;
        if ( v30 > 0x40 )
        {
          sub_2585B30(&v32);
          v28 = v33;
          v24 = v32;
          goto LABEL_27;
        }
      }
      v24 = v29;
      v32 = v29;
LABEL_27:
      v25 = *(_QWORD *)(a3 + 8);
      v38 = v28;
      v36 &= ~1u;
      v34 = v31;
      v35 = 2;
      v33 = 0;
      v37 = v24;
      v39 = v31;
      sub_6A01B0(v21 + v25, (__int64)&v35);
      if ( v35 > 1 )
        sub_69F740((__int64)&v35);
      if ( v33 > 0x40 && v32 )
        operator delete[](v32);
      ++v22;
      v21 += 56;
    }
    while ( v20 != v22 );
  }
  if ( v30 > 0x40 )
  {
    if ( v29 )
      operator delete[](v29);
  }
}

