__int64 __fastcall sub_118FD0(char *a1, char *a2)
{
  char v2; // al
  char v3; // dl
  char v4; // al
  __int16 v5; // dx
  __int16 v6; // ax
  int v7; // edx
  int v8; // eax
  __int64 v9; // rdx
  __int64 result; // rax

  v2 = *a1;
  *a1 = *a2;
  v3 = a2[1];
  *a2 = v2;
  v4 = a1[1];
  a1[1] = v3;
  v5 = *((_WORD *)a2 + 1);
  a2[1] = v4;
  v6 = *((_WORD *)a1 + 1);
  *((_WORD *)a1 + 1) = v5;
  v7 = *((_DWORD *)a2 + 1);
  *((_WORD *)a2 + 1) = v6;
  v8 = *((_DWORD *)a1 + 1);
  *((_DWORD *)a1 + 1) = v7;
  v9 = *((_QWORD *)a2 + 1);
  *((_DWORD *)a2 + 1) = v8;
  result = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = v9;
  *((_QWORD *)a2 + 1) = result;
  return result;
}
