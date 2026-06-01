__int64 __fastcall sub_D2290(__int64 a1)
{
  int *v1; // rbx
  const char *v2; // rdi
  unsigned int v3; // eax
  int v5; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( dword_2515A4
    && (v1 = *(int **)(a1 + 32), (v2 = *(const char **)(a1 + 24)) != nullptr)
    && v1
    && (v5 = 0, v3 = sub_C86D0(v2, (__int64)&v5), v3 != -1) )
  {
    return (unsigned __int8)sub_D1FE0(v3, (unsigned __int16 *)&v5, v1);
  }
  else
  {
    return 0;
  }
}

