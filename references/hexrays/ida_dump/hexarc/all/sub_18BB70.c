unsigned __int64 __fastcall sub_18BB70(__int64 a1, char *a2)
{
  __int64 v2; // rcx
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  char v8; // [rsp+8h] [rbp-20h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v2 = *((unsigned int *)a2 + 1);
  if ( (_DWORD)v2 != -1 )
  {
    v4 = *a2;
    v7 = -1;
    if ( v4 == 1 )
    {
      v5 = *((int *)a2 + 2);
    }
    else
    {
      if ( v4 != 5 )
        return v9 - __readfsqword(0x28u);
      v5 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL);
    }
    v8 = v4;
    v6 = *(_QWORD *)(a1 + 8);
    v7 = v5;
    sub_327EF0(&v7, *(_QWORD *)(v6 + 1440), a1 + 48, v2);
  }
  return v9 - __readfsqword(0x28u);
}
