__int64 __fastcall sub_42D8A0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 (__fastcall **v3)(); // rbx
  __int64 v4; // rax

  v2 = 1;
  v3 = &off_2BF9F48;
  do
  {
    if ( *v3 )
    {
      v4 = (*v3)();
      v2 &= (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1, a2);
    }
    v3 += 2;
  }
  while ( v3 != (__int64 (__fastcall **)())&unk_2BFA2E8 );
  return v2;
}
