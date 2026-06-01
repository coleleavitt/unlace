__int64 __fastcall sub_91080(__int64 *a1)
{
  __int64 v1; // rax

  v1 = *a1;
  *((_BYTE *)a1 + 20) = 0;
  return (*(__int64 (**)(void))(v1 + 256))();
}

