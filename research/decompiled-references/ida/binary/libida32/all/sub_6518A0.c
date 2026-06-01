unsigned __int64 __fastcall sub_6518A0(_QWORD *a1, unsigned int **a2)
{
  unsigned int *v2; // rax
  unsigned int *v3; // rbx
  __int64 v4; // r13
  unsigned int v5; // ebp
  int v7; // [rsp+0h] [rbp-38h] BYREF
  char v8; // [rsp+4h] [rbp-34h]
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v2 = a2[1];
  v9 = __readfsqword(0x28u);
  v3 = *a2;
  v4 = (__int64)&(*a2)[(_QWORD)v2];
  if ( (unsigned int *)v4 != *a2 )
  {
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        v7 = -1;
        v8 = 0;
        if ( !(unsigned __int8)sub_3DC4D0(a1, (__int64)&v7, v5) && !(unsigned __int8)sub_3FD660(a1, (__int64)&v7, v5) )
          break;
        if ( (unsigned int *)v4 == ++v3 )
          return v9 - __readfsqword(0x28u);
      }
      ++v3;
      sub_3CA860((_DWORD)a1, v5);
    }
    while ( (unsigned int *)v4 != v3 );
  }
  return v9 - __readfsqword(0x28u);
}

