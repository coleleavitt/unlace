__int64 __fastcall sub_66EA50(__int64 *a1, int a2, int a3, int a4)
{
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax

  v6 = getinf(16);
  v7 = sub_684CE0((_DWORD)a1, v6, a2, a3, a4, 0, 1);
  sub_632610(*a1, 16, v7);
  v8 = getinf(17);
  v9 = sub_684CE0((_DWORD)a1, v8, a2, a3, a4, 0, 1);
  sub_632610(*a1, 17, v9);
  v10 = getinf(15);
  v11 = sub_684CE0((_DWORD)a1, v10, a2, a3, a4, 0, 1);
  sub_632610(*a1, 15, v11);
  v12 = getinf(18);
  v13 = sub_684CE0((_DWORD)a1, v12, a2, a3, a4, 0, 1);
  return sub_632610(*a1, 18, v13);
}
