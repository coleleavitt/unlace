__int64 __fastcall sub_444880(__int64 a1, const char *a2, int a3, _DWORD *a4)
{
  const char *v4; // r15
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // r13d
  int i; // eax
  unsigned int v11; // r12d
  int v12; // eax
  unsigned int v14; // [rsp+44h] [rbp-54h]
  __int64 v15; // [rsp+48h] [rbp-50h]
  _BYTE v16[12]; // [rsp+50h] [rbp-48h] BYREF
  int v17; // [rsp+5Ch] [rbp-3Ch] BYREF
  int v18; // [rsp+60h] [rbp-38h] BYREF
  _BYTE v19[52]; // [rsp+64h] [rbp-34h] BYREF

  v4 = a2;
  sub_49EDC0(a4);
  v7 = a1;
  v8 = *(_QWORD *)a4;
  v9 = a4[3] - 1;
  if ( !a1 )
    v7 = qword_65A5A8;
  v15 = v7;
  if ( a2 )
  {
    if ( a3 < 0 )
      a3 = strlen(a2);
  }
  else
  {
    a3 = 0;
  }
  v14 = 3;
  for ( i = (*(__int64 (__fastcall **)(_QWORD, const char *, _QWORD, __int64, _BYTE *, __int64, unsigned int, int *, int *, _BYTE *))(v15 + 16))(
              *(_QWORD *)(v15 + 40),
              a2,
              (unsigned int)a3,
              3,
              v16,
              v8,
              v9,
              &v17,
              &v18,
              v19);
        ;
        i = (*(__int64 (__fastcall **)(_QWORD, const char *, _QWORD, _QWORD, _BYTE *, __int64, unsigned int, int *, int *, _BYTE *))(v15 + 16))(
              *(_QWORD *)(v15 + 40),
              v4,
              (unsigned int)a3,
              v14,
              v16,
              v8,
              v9,
              &v17,
              &v18,
              v19) )
  {
    v11 = v8 + v18 - *a4;
    if ( i != -4 )
      break;
    v14 &= ~1u;
    a3 -= v17;
    v4 += v17;
    v12 = a4[2];
    if ( !v12 )
    {
      sub_49F040(a4, v9);
      v12 = a4[2];
    }
    sub_49F040(a4, (unsigned int)(2 * v12 + 1));
    v8 = *(_QWORD *)a4 + (int)v11;
    v9 = a4[2] + ~v11;
  }
  if ( *(_DWORD *)(v15 + 32) == 2 )
    sub_49F040(a4, v11 + 1);
  sub_49F040(a4, v11);
  return *(_QWORD *)a4;
}

