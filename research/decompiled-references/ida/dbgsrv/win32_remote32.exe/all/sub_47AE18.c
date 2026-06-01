/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47AE18
// Address: 0x0047AE18

//----- (0047AE18) --------------------------------------------------------
void __usercall sub_47AE18(const unsigned __int16 *a1@<edi>, const unsigned __int16 *a2)
{
  int v2; // eax
  void *v3; // esi
  _WORD *v4; // edx
  int v5; // ebx
  int v6; // eax
  int v7; // ebx
  unsigned __int16 **v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // eax
  __int16 v12; // dx
  unsigned int v13; // eax
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // cx
  int v17; // edi
  unsigned __int16 v18; // [esp+Ch] [ebp-20h]
  __m128i **v19; // [esp+14h] [ebp-18h]
  int v20; // [esp+1Ch] [ebp-10h] BYREF
  BOOL v21; // [esp+20h] [ebp-Ch] BYREF
  int v22; // [esp+24h] [ebp-8h]
  int v23; // [esp+28h] [ebp-4h] BYREF

  v19 = (__m128i **)sub_47A9E7();
  v22 = sub_47A9ED();
  v23 = 0;
  v21 = 0;
  if ( sub_47AA4B(0, (int)a1, &v23) || sub_47A9F3(0, (int)a1, &v21) )
    goto LABEL_38;
  a1 = a2;
  if ( !dword_4B7EB8 )
    goto LABEL_7;
  v2 = wcscmp(a2, (const unsigned __int16 *)dword_4B7EB8);
  if ( v2 )
    v2 = v2 < 0 ? -1 : 1;
  if ( v2 )
  {
LABEL_7:
    v3 = sub_479531(2 * wcslen(a2) + 2);
    if ( !v3 )
    {
LABEL_36:
      sub_479216(v3);
      return;
    }
    sub_479216(dword_4B7EB8);
    v4 = v3;
    v3 = nullptr;
    dword_4B7EB8 = v4;
    if ( !sub_47B594((int)(a2 + 1), (int)a2, v4, wcslen(a2) + 1, (int)a2) )
    {
      v5 = v22;
      sub_464890(*(__m128i **)v22, 0, 0x80u);
      sub_464890(*(__m128i **)(v5 + 4), 0, 0x80u);
      sub_464890(*v19, 0, 0x40u);
      sub_464890(v19[1], 0, 0x40u);
      sub_47ADD1((int)v19, (int)a2, (int)a2, *(WCHAR **)v22, (*v19)->m128i_i8, 3);
      v6 = 3;
      do
      {
        if ( *a1 )
          ++a1;
        --v6;
      }
      while ( v6 );
      v18 = *a1;
      if ( *a1 == 45 )
        ++a1;
      v7 = 3600 * sub_46BE7A((unsigned __int16 **)0x2D, (int)v19, (int)a1, (int)a1, &v20, 10);
      v23 = v7;
      while ( 1 )
      {
        v8 = (unsigned __int16 **)*a1;
        if ( v8 != (unsigned __int16 **)43 && (unsigned __int16)((_WORD)v8 - 48) > 9u )
          break;
        ++a1;
      }
      if ( (_WORD)v8 == 58 )
      {
        ++a1;
        v9 = sub_46BE7A(v8, v7, (int)a1, (int)a1, &v20, 10);
        v10 = 48;
        v7 = 60 * v9 + v23;
        v11 = *a1;
        v23 = v7;
        v12 = v11;
        if ( (unsigned __int16)v11 >= 0x30u )
        {
          v10 = v11;
          do
          {
            v12 = v10;
            if ( (unsigned __int16)v10 > 0x39u )
              break;
            v10 = *++a1;
            v12 = *a1;
          }
          while ( (unsigned __int16)v10 >= 0x30u );
          v3 = nullptr;
        }
        if ( v12 == 58 )
        {
          ++a1;
          v13 = sub_46BE7A((unsigned __int16 **)v10, v7, (int)a1, (int)a1, &v20, 10);
          v7 = v13 + v23;
          v14 = *a1;
          v23 = v7;
          if ( v14 >= 0x30u )
          {
            v15 = v14;
            do
            {
              if ( v15 > 0x39u )
                break;
              v15 = *++a1;
            }
            while ( *a1 >= 0x30u );
            v3 = nullptr;
          }
        }
      }
      if ( v18 == 45 )
      {
        v7 = -v7;
        v23 = v7;
      }
      v16 = *a1;
      v21 = *a1 != 0;
      if ( v16 )
      {
        sub_47ADD1(v7, (int)a1, (int)a1, *(WCHAR **)(v22 + 4), v19[1]->m128i_i8, 3);
        v7 = v23;
      }
      *sub_47A9E1() = v7;
      v17 = v21;
      *sub_47A9D5() = v17;
      goto LABEL_36;
    }
LABEL_38:
    sub_467F04(0, (int)a1);
    __debugbreak();
  }
}
