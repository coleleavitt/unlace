unsigned __int64 __fastcall sub_69E750(__int64 *a1, unsigned int a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 i; // rsi
  __int64 v8; // rax
  unsigned int v9; // r15d
  __int64 v10; // rsi
  __int64 v12; // rax
  unsigned int v13; // [rsp+0h] [rbp-48h] BYREF
  char v14; // [rsp+4h] [rbp-44h]
  unsigned __int64 v15; // [rsp+8h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v5 = *a1;
  v13 = -1;
  v14 = 0;
  v6 = *(_QWORD *)(v5 + 1672);
  sub_3FD660(a1, (__int64)&v13, a2);
  for ( i = v13; v13 != -1; i = v13 )
  {
    if ( sub_3B8910((__int64)a1, i) )
    {
      if ( *(_BYTE *)(v6 + 8) )
      {
        v8 = *(_QWORD *)(v6 + 184);
        v9 = v13;
        v10 = *(_QWORD *)(v6 + 176);
        if ( *(_QWORD *)(v6 + 192) < (unsigned __int64)(v8 + 1) )
        {
          v12 = qvector_reserve(v6 + 176, v10, v8 + 1, 4);
          *(_QWORD *)(v6 + 176) = v12;
          v10 = v12;
          v8 = *(_QWORD *)(v6 + 184);
        }
        *(_DWORD *)(v10 + 4 * v8) = v9;
        ++*(_QWORD *)(v6 + 184);
      }
      else
      {
        sub_3A1A90(a1, v13, v13 + 1, 0x28u);
      }
    }
    if ( a3 )
      sub_3FEBE0((__int64)a1, v13, a2);
    sub_3FD7C0(a1, &v13, a2);
  }
  return v15 - __readfsqword(0x28u);
}

