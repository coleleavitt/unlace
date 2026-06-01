/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C5CD
// Address: 0x0046C5CD

//----- (0046C5CD) --------------------------------------------------------
int __cdecl sub_46C5CD(int a1, int a2)
{
  int v2; // esi
  int **v3; // eax
  int **v4; // ebx
  int *v5; // eax
  int *v6; // eax
  int v7; // eax
  int *v8; // ecx
  int *v9; // edx
  int result; // eax
  int v11; // eax
  char v12; // bl
  int *v13; // esi
  int *v14; // eax
  int v15; // [esp+18h] [ebp-20h]
  int v16; // [esp+18h] [ebp-20h]

  v2 = a2;
  if ( a2 == 4 || a2 == 3 )
    return sub_46C364(a1);
  if ( a1 == 2 || a1 == 21 || a1 == 22 || a1 == 6 || a1 == 15 )
  {
    v12 = 0;
    v16 = 0;
    sub_47A78B(3);
    if ( (a1 == 2 || a1 == 21) && !byte_4B78DD )
    {
      if ( SetConsoleCtrlHandler(HandlerRoutine, 1) )
      {
        byte_4B78DD = 1;
      }
      else
      {
        v13 = sub_46B971();
        *v13 = GetLastError();
        v12 = 1;
        v2 = a2;
      }
    }
    v14 = sub_46C2FA(a1);
    if ( v14 )
    {
      v16 = __ROR4__(*v14 ^ __security_cookie, __security_cookie & 0x1F);
      if ( v2 != 2 )
        *v14 = sub_46B9E4(v2);
    }
    sub_47A7D3(3);
    if ( !v12 )
      return v16;
    return sub_46C364(a1);
  }
  if ( a1 != 8 && a1 != 4 && a1 != 11 )
    return sub_46C364(a1);
  v3 = (int **)sub_47841D();
  v4 = v3;
  if ( !v3 )
    return sub_46C364(a1);
  v5 = *v3;
  if ( *v4 != dword_4A6528 )
    goto LABEL_16;
  v6 = (int *)sub_479531(0x90u);
  *v4 = v6;
  if ( !v6 )
    return sub_46C364(a1);
  sub_464310((unsigned int)v6, (unsigned int)dword_4A6528, 0x90u);
  v5 = *v4;
LABEL_16:
  v7 = sub_46C33C(a1, (int)v5);
  v8 = (int *)v7;
  if ( !v7 )
    return sub_46C364(a1);
  v9 = (int *)(v7 + 8);
  result = *(_DWORD *)(v7 + 8);
  v15 = v8[2];
  if ( a2 != 2 )
  {
    v11 = (int)(*v4 + 36);
    while ( v8 != (int *)v11 && *(v9 - 1) == a1 )
    {
      *v9 = a2;
      v9 += 3;
      v8 = v9 - 2;
    }
    return v15;
  }
  return result;
}
// 4A6528: using guessed type int dword_4A6528[3];
// 4B78DD: using guessed type char byte_4B78DD;
