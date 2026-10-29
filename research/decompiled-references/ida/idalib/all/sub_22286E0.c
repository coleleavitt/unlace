__int64 __fastcall sub_22286E0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // r14
  char *v4; // rbx
  char *v5; // rax
  __int64 v6; // r15
  int v7; // ecx
  char v8; // dl
  int v9; // ebp
  __int64 v10; // r13
  bool v11; // zf
  __int64 v12; // rdi

  v3 = a1[2];
  v4 = (char *)a1[3];
  if ( v3 >= (unsigned __int64)v4 )
  {
    v6 = a1[2];
    v9 = 1;
  }
  else
  {
    v5 = (char *)a1[2];
    LODWORD(v6) = (_DWORD)v5;
    v7 = 1;
    do
    {
      v8 = *v5++;
      if ( v8 == 10 )
      {
        ++v7;
        LODWORD(v6) = (_DWORD)v5;
      }
    }
    while ( v5 != v4 );
    v9 = v7;
  }
  v10 = operator new(0x20u);
  *(_QWORD *)(v10 + 8) = a2;
  *(_DWORD *)(v10 + 16) = v9;
  *(_QWORD *)v10 = off_2C75BF8;
  v11 = *((_BYTE *)a1 + 8) == 0;
  *(_DWORD *)(v10 + 24) = (_DWORD)v4 - v3;
  *(_DWORD *)(v10 + 20) = (_DWORD)v4 - v6;
  if ( !v11 )
  {
    v12 = *a1;
    *((_BYTE *)a1 + 8) = 0;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  }
  *a1 = v10;
  *((_BYTE *)a1 + 8) = 1;
  return 0;
}
