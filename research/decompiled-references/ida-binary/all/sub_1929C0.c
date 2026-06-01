char __fastcall sub_1929C0(__int64 a1, int a2)
{
  __int64 v3; // rdi
  char result; // al
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  char v11; // [rsp+Fh] [rbp-49h]
  __int64 v12; // [rsp+10h] [rbp-48h] BYREF
  __int128 v13; // [rsp+18h] [rbp-40h]
  int v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+2Ch] [rbp-2Ch]
  unsigned __int64 v16; // [rsp+38h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 16);
  v16 = __readfsqword(0x28u);
  result = is_mapped(v3);
  if ( result )
  {
    v6 = qword_8CC7C0;
    if ( qword_8CC7C0 || (_QWORD)xmmword_8CC7D8 && (v6 = *(_QWORD *)qword_8CC7D0) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 16);
      v12 = 0;
      v14 = -1;
      v15 = a2;
      v13 = 0;
      result = (*(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v6 + 1104LL))(
                 v6,
                 v7,
                 1,
                 &v12) == 1;
      if ( v12 )
      {
        v11 = result;
        *(_QWORD *)&v13 = 0;
        qfree(v12, v7, v8, v9, v10);
        return v11;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
