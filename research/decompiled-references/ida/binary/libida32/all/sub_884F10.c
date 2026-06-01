__int64 __fastcall sub_884F10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  const char *v7; // rdi
  char v9; // [rsp+0h] [rbp-28h]
  int v10; // [rsp+Ch] [rbp-1Ch] BYREF
  int v11; // [rsp+10h] [rbp-18h] BYREF
  int v12; // [rsp+14h] [rbp-14h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  v7 = haystack;
  if ( *(_QWORD *)(a1 + 8) )
    v7 = *(const char **)a1;
  if ( (unsigned int)qsscanf((int)v7, (int)"%d.%d%n", (int)&v10, (int)&v11, (int)&v12, a6, v9) == 2
    && v12 == (*(_QWORD *)(a1 + 8) == 0) + *(_QWORD *)(a1 + 8) - 1LL )
  {
    return (unsigned int)(v11 + 100 * v10);
  }
  else
  {
    return 0xFFFFFFFFLL;
  }
}

