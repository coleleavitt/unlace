__int64 __fastcall sub_73BA70(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // r13d
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // [rsp+8h] [rbp-50h] BYREF
  unsigned int v10; // [rsp+Ch] [rbp-4Ch] BYREF
  _BYTE v11[4]; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v9 = 0;
  v5 = dword_2CAA5C8;
  qword_2CA2E68 = (__int64)++qword_2CAA5C0;
  LOWORD(result) = 0;
  while ( 1 )
  {
    v10 = 0;
    if ( (_WORD)result && *qword_2CAA5C0 == 77 )
    {
      sub_74F560(&v12, "`_unnamed_'", 11);
      dword_2CAA5C8 |= 0x80000u;
      v10 = v12;
    }
    else
    {
      v10 = sub_73AB20(nullptr, a2, a3, a4, a5);
    }
    a2 = nullptr;
    v10 = sub_73ACE0((int *)&v10, 0, 0, v7, v8);
    if ( (_WORD)v9 )
      break;
    result = v10;
    if ( !*qword_2CAA5C0 )
      return result;
LABEL_3:
    dword_2CAA5C8 = v5;
    v9 = result;
  }
  sub_74F810(v11, 540884000, 4);
  a2 = (char *)&v12;
  v12 = sub_750E60(v11, &v9);
  sub_7506B0(&v10, &v12);
  result = v10;
  if ( *qword_2CAA5C0 )
    goto LABEL_3;
  return result;
}

