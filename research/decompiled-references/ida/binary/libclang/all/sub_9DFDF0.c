__int64 __fastcall sub_9DFDF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rbp
  int v6; // eax
  unsigned int v7; // ebp
  void *v9; // r14
  bool v10; // r13
  char v11; // r13
  unsigned int v12; // r15d
  void *v13; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-70h]
  bool v15; // [rsp+Ch] [rbp-6Ch]
  void *v16; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-60h]
  void *v18; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-50h]
  char v20; // [rsp+2Ch] [rbp-4Ch]
  int v21; // [rsp+30h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v19 = v4;
  v18 = *(void **)v3;
  LOBYTE(v4) = *(_BYTE *)(v3 + 12);
  LODWORD(v3) = *(_DWORD *)(v3 + 16);
  v20 = v4;
  v21 = v3;
  sub_A1A5E0(v2, 24);
  v5 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v6 = *(_DWORD *)(v5 + 48);
  if ( !v6 )
  {
    if ( !*(_QWORD *)(v5 + 24) )
      goto LABEL_3;
LABEL_11:
    v17 = v19;
    if ( v19 > 0x40 )
    {
      v11 = HIBYTE(v21) >> 5;
      sub_2585B30(&v16);
      v12 = v17;
      v9 = v16;
      v14 = v17;
      v13 = v16;
      v15 = !(v11 & 1);
      if ( v17 > 0x40 )
      {
        v10 = (unsigned int)sub_2587400(&v13) == v12;
        if ( v9 )
          operator delete[](v9);
LABEL_14:
        if ( !v10 && !(unsigned __int8)sub_9D4C70(a1, a2, v5) )
          goto LABEL_4;
        goto LABEL_3;
      }
    }
    else
    {
      v9 = v18;
    }
    v10 = v9 == nullptr;
    goto LABEL_14;
  }
  if ( v6 == 2 )
  {
    if ( *(_QWORD *)(v5 + 24) )
      goto LABEL_11;
  }
  else if ( v6 == 3 || *(_QWORD *)(v5 + 32) || *(_QWORD *)v5 )
  {
    goto LABEL_11;
  }
LABEL_3:
  v7 = sub_944110(a1, a2, (__int64)&v18, v5, 0);
  if ( (_BYTE)v7 )
  {
    sub_9C74F0(a1);
    goto LABEL_5;
  }
LABEL_4:
  v7 = 0;
LABEL_5:
  if ( v19 > 0x40 && v18 )
    operator delete[](v18);
  return v7;
}

