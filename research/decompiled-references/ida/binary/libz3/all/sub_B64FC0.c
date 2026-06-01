__int64 __fastcall sub_B64FC0(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  _DWORD *v4; // r15
  int *v5; // r14
  unsigned int v6; // ebx
  _DWORD *v7; // r12
  int v8; // ebp
  __int64 v9; // rbx
  __int64 v10; // rax
  int *v11; // [rsp+10h] [rbp-88h]
  __int64 v12; // [rsp+18h] [rbp-80h]
  int v13[30]; // [rsp+20h] [rbp-78h] BYREF

  result = *(_QWORD *)(a1 + 112);
  if ( *(_BYTE *)(result + 697) )
  {
    v11 = v13;
    v12 = 0x1000000000LL;
    if ( (_DWORD)a2 )
    {
      v4 = a3;
      v5 = v13;
      v6 = 16;
      v7 = &a3[(unsigned int)a2];
      a2 = 0;
      while ( 1 )
      {
        v8 = *v4 ^ 1;
        if ( (unsigned int)a2 >= v6 )
        {
          v9 = 2 * v6;
          v5 = (int *)sub_186B270(4 * v9);
          v10 = 0;
          a2 = (unsigned int)v12;
          if ( (_DWORD)v12 )
          {
            do
            {
              v5[v10] = v11[v10];
              ++v10;
            }
            while ( (unsigned int)v12 != v10 );
          }
          if ( v11 != v13 && v11 )
          {
            sub_186B220(v11);
            a2 = (unsigned int)v12;
          }
          v11 = v5;
          HIDWORD(v12) = v9;
        }
        v5[a2] = v8;
        ++v4;
        a2 = (unsigned int)(v12 + 1);
        LODWORD(v12) = v12 + 1;
        if ( v7 == v4 )
          break;
        v6 = HIDWORD(v12);
      }
      result = *(_QWORD *)(a1 + 112);
    }
    else
    {
      v5 = v13;
    }
    result = sub_AAD480(a1, a2, (__int64)v5, dword_1C7ED68, result + 704);
    if ( v11 )
    {
      if ( v11 != v13 )
        return sub_186B220(v11);
    }
  }
  return result;
}

