__int64 __fastcall sub_91100(__int64 *a1)
{
  __int64 v1; // rax
  __int64 *i; // rax
  __int64 *v3; // rbx
  __int64 result; // rax

  v1 = *a1;
  *((_BYTE *)a1 + 21) = 1;
  (*(void (**)(void))(v1 + 320))();
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1[1] + 376LL))(a1[1], a1);
  for ( i = (__int64 *)a1[7]; a1 + 7 != i; i = v3 )
  {
    v3 = (__int64 *)*i;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)i[2] + 24LL))(i[2]);
  }
  result = sub_15E0E0(a1[1]);
  if ( a1 == (__int64 *)result )
    return sub_19B690(2, 0, 0);
  return result;
}

