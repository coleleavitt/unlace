/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475F60
// Address: 0x0000000000475F60

//----- (0000000000475F60) ----------------------------------------------------
__int64 __fastcall sub_475F60(__int64 a1, __int64 a2)
{
  _QWORD *v4; // x22
  _QWORD *v5; // x24
  __int64 v6; // x19
  _QWORD *v7; // x21
  __int64 v8; // x0
  __int64 result; // x0
  pthread_t v10; // x0
  __int64 v11; // x22
  int *v12; // x0

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
  v4 = *(_QWORD **)(a1 + 88);
  v5 = v4 + 1;
  v6 = v4[4];
  v7 = v4 + 2;
  if ( (_QWORD *)v6 == v4 + 2 )
    goto LABEL_6;
  if ( a2 != *(_QWORD *)(v6 + 32) )
  {
    while ( 1 )
    {
      v8 = sub_49F6E8(v6);
      v6 = v8;
      if ( (_QWORD *)v8 == v7 )
        break;
      if ( *(_QWORD *)(v8 + 32) == a2 )
        goto LABEL_8;
    }
LABEL_6:
    result = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
    if ( !a2 )
      return result;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  }
LABEL_8:
  v10 = *(_QWORD *)(v6 + 40);
  if ( v10 )
  {
    j__pthread_detach(v10);
    v11 = *(_QWORD *)(a1 + 88);
    v5 = (_QWORD *)(v11 + 8);
    v7 = (_QWORD *)(v11 + 16);
  }
  v12 = sub_49FAC0((int *)v6, v7);
  j__free_0(v12);
  --v5[5];
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(*(_QWORD *)(a1 + 88));
  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return result;
}
