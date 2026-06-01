__int64 __fastcall sub_8EAFB0(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // r12
  int v5; // eax
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rbx
  unsigned int v10; // eax
  unsigned __int8 v11; // [rsp+1h] [rbp-89h]
  unsigned __int8 v12; // [rsp+1h] [rbp-89h]
  char v13; // [rsp+Dh] [rbp-7Dh] BYREF
  int v14; // [rsp+Eh] [rbp-7Ch] BYREF
  void *v15; // [rsp+12h] [rbp-78h] BYREF
  unsigned int v16; // [rsp+1Ah] [rbp-70h]
  char v17; // [rsp+1Eh] [rbp-6Ch]
  int v18; // [rsp+22h] [rbp-68h]
  void *v19; // [rsp+32h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+3Ah] [rbp-50h]
  char v21; // [rsp+3Eh] [rbp-4Ch]
  int v22; // [rsp+42h] [rbp-48h]
  void *v23; // [rsp+52h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+5Ah] [rbp-30h]
  char v25; // [rsp+5Eh] [rbp-2Ch]
  int v26; // [rsp+62h] [rbp-28h]

  result = 1;
  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v4 = *(_QWORD *)(a1 + 792);
    *(_QWORD *)(a1 + 800) = *a3;
    v5 = sub_256E510(a2);
    v6 = *(_QWORD *)(a1 + 568);
    v14 = v5;
    v7 = sub_A1A5A0(v6, 24);
    v8 = *(_DWORD *)(v7 + 8);
    *(_DWORD *)(v7 + 8) = 0;
    v24 = v8;
    v23 = *(void **)v7;
    LOBYTE(v8) = *(_BYTE *)(v7 + 12);
    LODWORD(v7) = *(_DWORD *)(v7 + 16);
    v25 = v8;
    v26 = v7;
    sub_A1A5E0(v6, 24);
    sub_256E520(&v19, &v23, &v14, &v13);
    v16 = v20;
    v15 = v19;
    v17 = v21;
    v18 = v22;
    if ( !v13 || (result = sub_9C87D0(a1 + 384, v4, &v15), (_BYTE)result) )
    {
      v9 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
      v10 = v16;
      *(_DWORD *)(v9 + 8) = v16;
      if ( v10 > 0x40 )
        sub_2585B30(v9);
      else
        *(_QWORD *)v9 = v15;
      *(_BYTE *)(v9 + 12) = v17;
      *(_DWORD *)(v9 + 16) = v18;
      result = 1;
    }
    if ( v16 > 0x40 && v15 )
    {
      v11 = result;
      operator delete[](v15);
      result = v11;
    }
    if ( v24 > 0x40 )
    {
      if ( v23 )
      {
        v12 = result;
        operator delete[](v23);
        return v12;
      }
    }
  }
  return result;
}

