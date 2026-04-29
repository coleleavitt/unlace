char __fastcall sub_1EC150(__int64 a1, char *a2, __int64 a3)
{
  char v3; // al
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  char v6; // [rsp+8h] [rbp-20h]
  int v7; // [rsp+Ch] [rbp-1Ch]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v3 = *a2;
  if ( *a2 == 1 )
  {
    v5 = *((int *)a2 + 2);
    v7 = *((_DWORD *)a2 + 1);
  }
  else
  {
    if ( v3 != 5 )
      return 0;
    v5 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL);
    v7 = *((_DWORD *)a2 + 1);
  }
  v6 = v3;
  return sub_1EC070(a1, (__int64)&v5, a3);
}
