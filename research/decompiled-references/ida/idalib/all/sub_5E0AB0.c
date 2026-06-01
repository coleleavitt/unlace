__int64 __fastcall sub_5E0AB0(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // eax
  int v4; // ebp
  unsigned int v6; // ecx
  __int64 v8; // rsi
  unsigned int i; // edx
  __int64 v10; // rdi
  unsigned int ptr; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v3 = a2;
  v4 = a2;
  v12 = __readfsqword(0x28u);
  ptr = 0;
  if ( a2 == 3 )
  {
    v4 = 4;
    v3 = 4;
  }
  v6 = *a3;
  if ( *(_DWORD *)(a1 + 80) - v4 >= *a3 )
  {
    if ( !*(_QWORD *)(a1 + 56) )
    {
      v8 = v6 + *(_QWORD *)(a1 + 64);
      if ( v3 )
      {
        for ( i = 0; i < v3; ++i )
        {
          v10 = i;
          *((_BYTE *)&ptr + v10) = *(_BYTE *)(v8 + v10);
        }
      }
      goto LABEL_7;
    }
    if ( v3 == qfread(*(FILE **)(a1 + 56), &ptr) )
    {
      v6 = *a3;
LABEL_7:
      *a3 = v4 + v6;
      return ptr;
    }
  }
  return 0xFFFFFFFFLL;
}
