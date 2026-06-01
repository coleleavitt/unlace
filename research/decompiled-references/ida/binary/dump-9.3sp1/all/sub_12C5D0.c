unsigned __int64 __fastcall sub_12C5D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  unsigned __int8 *v5; // rbp
  int v6; // eax
  unsigned __int8 *v7; // r15
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 *v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int8 v18; // al
  int v19; // edx
  __int64 v20; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 *v21; // [rsp+8h] [rbp-50h]
  unsigned __int64 v22; // [rsp+18h] [rbp-40h]

  v4 = a2 + 32;
  v22 = __readfsqword(0x28u);
  sub_123A40((__int64)&v20, (unsigned __int8 *)(a2 + 32), a3, a4);
  v5 = v21;
  v6 = *(_DWORD *)v21;
  if ( *(_DWORD *)v21 != 10 )
  {
    v7 = v21 + 32;
    if ( v6 == 63 )
    {
LABEL_3:
      *(_DWORD *)a2 = 64;
      v8 = *((_DWORD *)v5 + 1);
      goto LABEL_4;
    }
    *(_DWORD *)a2 = v6;
    v7 = v5 + 32;
    v8 = *((_DWORD *)v5 + 1);
    goto LABEL_4;
  }
  v18 = v21[32];
  if ( v18 == 10 || v18 == 4 )
  {
    *(_DWORD *)a2 = 10;
    v8 = *((_DWORD *)v5 + 1);
    v7 = v5 + 32;
    goto LABEL_16;
  }
  v7 = v21 + 32;
  if ( (unsigned __int8)sub_12AB50(v21 + 32, a1, *(_DWORD *)(a2 + 68), 1) )
  {
    *(_DWORD *)v5 = 4;
    *(_DWORD *)a2 = 4;
    v8 = *((_DWORD *)v5 + 1);
    goto LABEL_4;
  }
  v19 = *(_DWORD *)v5;
  if ( *(_DWORD *)v5 == 63 )
    goto LABEL_3;
  *(_DWORD *)a2 = v19;
  v8 = *((_DWORD *)v5 + 1);
  if ( v19 == 10 )
LABEL_16:
    v8 &= ~0x10u;
LABEL_4:
  *(_DWORD *)(a2 + 4) = v8;
  if ( (unsigned __int8 *)v4 != v7 )
  {
    sub_11CDA0(v4);
    sub_123A40(v4, v7, v9, v10);
  }
  if ( v5 + 48 != (unsigned __int8 *)(a2 + 48) )
  {
    sub_11CDA0(a2 + 48);
    sub_123A40(a2 + 48, v5 + 48, v11, v12);
  }
  if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
  {
    v13 = v5 + 64;
    v14 = a2 + 64;
    if ( v13 != (unsigned __int8 *)(a2 + 64) )
    {
      sub_11CDA0(v14);
      sub_123A40(v14, v13, v15, v16);
    }
  }
  sub_11CDA0((__int64)&v20);
  return v22 - __readfsqword(0x28u);
}
