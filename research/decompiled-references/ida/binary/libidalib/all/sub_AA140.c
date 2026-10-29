__int64 __fastcall sub_AA140(__int64 a1, __int64 a2, int *a3, __int64 *a4)
{
  int v6; // eax
  unsigned __int8 v7; // dl
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned int v13; // r13d
  char v15; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v6 = sub_A8B10(a2);
  if ( v6 <= 0 )
    goto LABEL_12;
  *a3 = v6;
  v7 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 <= 2u )
  {
    *a3 = v6 + 1;
    v7 = *(_BYTE *)a1;
    if ( *(_BYTE *)a1 == 1 )
    {
      v9 = getinf();
      goto LABEL_5;
    }
  }
  if ( v7 <= 7u )
  {
    v9 = (unsigned int)sub_A8B10(a2);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) != (unsigned int)v9 )
      goto LABEL_5;
LABEL_19:
    v9 = -1;
    goto LABEL_5;
  }
  v8 = (unsigned int)sub_A8B10(a2);
  v9 = v8 | (sub_A8B10(a2) << 32);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) == v9 )
    goto LABEL_19;
LABEL_5:
  v10 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = v9;
  *(_QWORD *)(v10 + 232) = v9;
  if ( *(_BYTE *)a1 > 1u )
  {
    v11 = getinf();
    v12 = *(_QWORD *)(a1 + 16);
    if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDLL && v12 != v11 )
    {
      getinf();
      if ( (unsigned int)rebase_program() )
      {
        if ( a4 )
        {
          move_segm_strerror();
          sub_94440(a4);
        }
        return 0;
      }
    }
  }
  v15 = 0;
  qlread();
  if ( (unsigned int)getinf() )
    sub_8F740((__int64)"Warning: the current processor flags and the flags of the trace differ\n", &v15);
  v13 = sub_A8BF0(a1, a2);
  if ( !(_BYTE)v13 )
  {
LABEL_12:
    if ( a4 )
      sub_9C440((__int64)a4, "illegal trace data");
    return 0;
  }
  sub_A8DF0(a1, a2);
  return v13;
}

