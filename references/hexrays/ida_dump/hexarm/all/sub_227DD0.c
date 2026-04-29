char __fastcall sub_227DD0(__int64 a1, unsigned __int64 *a2, int *a3, __int64 a4)
{
  char result; // al
  __int64 v9; // rdi
  signed __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rsi
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  _QWORD *v19; // r10
  __int64 v20; // r10
  unsigned __int64 v21; // r11

  result = sub_227B00(a1, *a2, *a3);
  if ( result )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(_QWORD *)(a4 + 144);
    v11 = *a2;
    if ( *(_QWORD *)(v9 + 24) < (unsigned __int64)v10 || (result = 0, v10 <= (__int64)v11) )
    {
      v12 = *(_QWORD **)(a1 + 16);
      v13 = *a3;
      v14 = v11;
      v15 = *a3 + v11;
      if ( (*v12 & 2) != 0 )
      {
        v16 = (_QWORD *)v12[2];
      }
      else
      {
        v19 = (_QWORD *)v12[1];
        if ( (*(_BYTE *)v19 & 2) != 0 )
        {
          v16 = (_QWORD *)(*v12 & 0xFFFFFFFFFFFFFFFCLL);
          v20 = *v16;
          if ( (*v16 & 2) == 0 )
          {
            while ( (_QWORD *)v16[1] == v12 )
            {
              v21 = v20 & 0xFFFFFFFFFFFFFFFCLL;
              v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v20 & 2) != 0 )
              {
                v16 = (_QWORD *)v21;
                break;
              }
              v12 = v16;
              v16 = (_QWORD *)v21;
            }
          }
        }
        else
        {
          do
          {
            v16 = v19;
            v19 = (_QWORD *)v19[2];
          }
          while ( (*(_BYTE *)v19 & 2) == 0 );
        }
      }
      v17 = v16[3] + v16[4];
      if ( v11 >= *(_QWORD *)(v9 + 24) )
      {
        v11 = *(_QWORD *)(v9 + 24);
        v14 = v11;
      }
      *a2 = v11;
      if ( v15 < v17 )
        v15 = v17;
      v18 = v15 - v14;
      *a3 = v18;
      return v13 < v18;
    }
  }
  return result;
}
