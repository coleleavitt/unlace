__int64 __fastcall sub_639160(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int8 a5)
{
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r13d
  int v12; // ebp
  char *v14; // rsi
  char *v15; // rax
  _BYTE *v16; // r8
  __int64 v17; // [rsp+8h] [rbp-A0h]
  int v18; // [rsp+1Ch] [rbp-8Ch] BYREF
  _DWORD *v19; // [rsp+20h] [rbp-88h] BYREF
  __int64 v20; // [rsp+28h] [rbp-80h]
  _BYTE v21[120]; // [rsp+30h] [rbp-78h] BYREF

  v9 = sub_132CA50(a2);
  v10 = a5;
  v11 = v9;
  if ( (unsigned int)(v9 - 16) <= 1 )
  {
    v12 = -1;
    if ( (_DWORD)a4 )
    {
      if ( HIDWORD(a4) == (_DWORD)a4 && HIDWORD(a4) )
      {
        v17 = v10;
        v19 = v21;
        v20 = 0x1000000000LL;
        sub_7B6C50(a2, &v19);
        v18 = a4;
        v14 = (char *)&v19[(unsigned int)v20];
        v15 = (char *)sub_638D30(v19, (__int64)v14, &v18);
        v10 = v17;
        if ( v14 != v15 )
          v12 = (v15 - v16) >> 2;
        if ( v16 != v21 )
        {
          free(v16);
          v10 = v17;
        }
      }
      else
      {
        v12 = -1;
      }
    }
    *(_DWORD *)a1 = v11;
  }
  else
  {
    *(_DWORD *)a1 = v9;
    v12 = 0;
  }
  *(_DWORD *)(a1 + 4) = v12;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = v10;
  *(_QWORD *)(a1 + 24) = a3;
  return a1;
}

