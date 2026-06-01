__int64 __fastcall sub_4565A0(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // r12d
  signed int v5; // ebx
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r14

  v5 = HIBYTE(*(_DWORD *)a2);
  if ( !v5 || v5 == 255 )
    return 1;
  LOBYTE(v4) = a3 == a4 || a3 == 2;
  if ( (_BYTE)v4 )
    sub_454CE0();
  v7 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int8)sub_592290(v7 + 600, (unsigned int)v5) )
  {
    v8 = 48LL * a3;
    v9 = v7 + 600 + v8 + 32;
    v10 = *(_QWORD *)(v7 + v8 + 640);
    if ( v10 )
    {
      v11 = v9;
      do
      {
        if ( v5 <= *(_DWORD *)(v10 + 32) )
        {
          v11 = v10;
          v10 = *(_QWORD *)(v10 + 16);
        }
        else
        {
          v10 = *(_QWORD *)(v10 + 24);
        }
      }
      while ( v10 );
      if ( v9 != v11 && v5 >= *(_DWORD *)(v11 + 32) )
      {
        v12 = *(_QWORD *)(v11 + 40);
        v13 = v7 + 600;
        v14 = *(_QWORD *)(v7 + 600) + 12 * v12;
        if ( (unsigned __int8)sub_592290(v13, *(unsigned int *)(v14 + 4LL * a4)) )
        {
          *(_BYTE *)(a2 + 3) = *(_BYTE *)(v14 + 4LL * a4);
          return 1;
        }
      }
    }
  }
  return v4;
}

