__int64 __fastcall sub_577410(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // r12
  char *v5; // rdx
  unsigned int v6; // ebp
  __int64 v7; // rbx
  char *v8; // rax
  void *v9; // rdi
  int v11; // [rsp+0h] [rbp-50h] BYREF
  _BYTE v12[12]; // [rsp+4h] [rbp-4Ch] BYREF
  __int128 v13; // [rsp+10h] [rbp-40h]
  unsigned __int64 v14; // [rsp+20h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v13 = 0;
  *(_DWORD *)&v12[8] = 0;
  v11 = sub_6180E0(a1);
  *(_QWORD *)v12 = (unsigned int)sub_618160(a1);
  if ( (unsigned int)sub_79A4E0(a1, &v12[4], &v11, a3) )
  {
    if ( (_QWORD)v13 )
      sub_365330();
    sub_375400();
  }
  v4 = v13;
  v5 = *(char **)&v12[4];
  v6 = v13;
  if ( *(_QWORD *)&v12[4] )
  {
    if ( (_QWORD)v13 )
    {
      v7 = 0;
      do
      {
        v8 = &v5[24 * v7];
        v9 = *(void **)v8;
        if ( *(_QWORD *)v8 )
        {
          *((_QWORD *)v8 + 1) = 0;
          qfree(v9);
          v5 = *(char **)&v12[4];
        }
        ++v7;
      }
      while ( v4 != v7 );
    }
    *(_QWORD *)&v13 = 0;
    qfree(v5);
  }
  return v6;
}

