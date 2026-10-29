__int64 __fastcall sub_815BE0(__int64 a1)
{
  void *v1; // rax
  void *v2; // rbx
  __int64 v3; // rbp
  __int128 v5; // [rsp+0h] [rbp-48h] BYREF
  void *v6[2]; // [rsp+10h] [rbp-38h]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v1 = (void *)open_linput(a1, 0);
  if ( !v1 )
    return 0;
  v2 = v1;
  v6[1] = nullptr;
  v5 = 0;
  v6[0] = v1;
  v3 = sub_815960((__int64)&v5);
  byte_2CD5EE0 = 0;
  if ( LOBYTE(v6[1]) )
    close_linput(v6[0]);
  close_linput(v2);
  return v3;
}
