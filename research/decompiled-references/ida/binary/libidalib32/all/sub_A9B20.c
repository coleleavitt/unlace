__int64 __fastcall sub_A9B20(__int64 a1, __int64 a2, int *a3, __int64 *a4)
{
  int v6; // eax
  unsigned __int8 v7; // dl
  int v8; // r13d
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  int v12; // r13d
  unsigned int v13; // r13d
  char v15; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v6 = sub_A8550(a2);
  if ( v6 <= 0 )
    goto LABEL_12;
  *a3 = v6;
  v7 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 <= 2u && (*a3 = v6 + 1, v7 = *(_BYTE *)a1, *(_BYTE *)a1 == 1) )
  {
    v9 = getinf();
  }
  else if ( v7 <= 7u )
  {
    v9 = sub_A8550(a2);
  }
  else
  {
    v8 = sub_A8550(a2);
    sub_A8550(a2);
    v9 = v8;
  }
  v10 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 16) = v9;
  *(_DWORD *)(v10 + 232) = v9;
  if ( *(_BYTE *)a1 > 1u )
  {
    v11 = getinf();
    v12 = *(_DWORD *)(a1 + 16);
    if ( (unsigned int)(v12 - 1) <= 0xFFFFFFFD && v12 != v11 )
    {
      getinf();
      if ( (unsigned int)rebase_program() )
      {
        if ( a4 )
        {
          move_segm_strerror();
          sub_94360(a4);
        }
        return 0;
      }
    }
  }
  v15 = 0;
  qlread();
  if ( (unsigned int)getinf() )
    sub_8F660((__int64)"Warning: the current processor flags and the flags of the trace differ\n", &v15);
  v13 = sub_A8720(a1, a2);
  if ( !(_BYTE)v13 )
  {
LABEL_12:
    if ( a4 )
      sub_9C320((__int64)a4, "illegal trace data");
    return 0;
  }
  sub_A8920(a1, a2);
  return v13;
}

