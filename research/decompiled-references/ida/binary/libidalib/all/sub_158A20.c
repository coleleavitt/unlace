void __fastcall sub_158A20(TView *a1, void *a2)
{
  int v2; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  v2 = 1;
  if ( *((char *)a1 + 24) < 0 )
    message(a1, 0x200u, 0x28u, &v2);
}

