__int64 __fastcall sub_22AE5C0(_BYTE *a1, size_t a2)
{
  int v2; // eax
  __int64 i; // rdx
  char v4; // cl
  size_t v5; // rdx
  char *v6; // rcx
  unsigned __int64 v7; // r8
  __int64 result; // rax
  int v9; // [rsp+2h] [rbp-2Ch] BYREF
  int v10; // [rsp+6h] [rbp-28h] BYREF
  int v11; // [rsp+Ah] [rbp-24h] BYREF
  _QWORD *v12; // [rsp+Eh] [rbp-20h] BYREF
  _QWORD *v13; // [rsp+16h] [rbp-18h] BYREF
  __int64 v14; // [rsp+1Eh] [rbp-10h] BYREF

  if ( !a2 )
    return 0;
  v2 = a2 - 1;
  i = (int)a2 - 1;
  if ( (int)a2 - 1 > 0 )
  {
    v4 = a1[v2];
    if ( (unsigned __int8)(v4 - 48) > 9u )
    {
LABEL_13:
      if ( v4 == 112 && (unsigned __int8)(a1[v2 - 1] - 48) <= 9u )
      {
        if ( v2 != 1 )
        {
          for ( i = v2 - 2; (_DWORD)i; --i )
          {
            if ( (unsigned __int8)(a1[i] - 48) > 9u )
              goto LABEL_8;
          }
        }
        v5 = 1;
        v7 = a2 - 1;
        v6 = a1 + 1;
        goto LABEL_21;
      }
    }
    else
    {
      for ( i = v2 - 1LL; --v2; --i )
      {
        v4 = a1[i];
        if ( (unsigned __int8)(v4 - 48) > 9u )
          goto LABEL_13;
      }
    }
  }
LABEL_8:
  v5 = i + 1;
  if ( v5 > a2 )
    v5 = a2;
  v6 = &a1[v5];
  v7 = a2 - v5;
  if ( a2 - v5 == -1 )
    goto LABEL_11;
LABEL_21:
  if ( !v7 )
    return 0;
LABEL_11:
  sub_22AD6D0((std::_V2 *)&v12, a1, v5, v6, v7, &v9, &v10, &v11, 1, 1);
  result = 1;
  if ( v12 )
  {
    v13 = v12;
    v12 = nullptr;
    sub_A05760(&v14, &v13);
    if ( v13 )
      (*(void (__fastcall **)(_QWORD *))(*v13 + 8LL))(v13);
    if ( v12 )
      (*(void (__fastcall **)(_QWORD *))(*v12 + 8LL))(v12);
    return 0;
  }
  return result;
}
