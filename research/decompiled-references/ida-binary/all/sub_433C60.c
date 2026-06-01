__int64 __fastcall sub_433C60(int a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rbp
  char *v6; // r12
  _QWORD *v7; // rax
  unsigned __int64 v8; // rcx
  char *v9; // rax
  char *v10; // r12
  unsigned int v11; // edx
  unsigned int v12; // eax
  __int64 v13; // rsi
  __int16 v14; // [rsp+Eh] [rbp-4Ah] BYREF
  _QWORD *v15; // [rsp+10h] [rbp-48h] BYREF
  __int128 v16; // [rsp+18h] [rbp-40h]
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( a1 == 1 )
  {
    (**(void (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 1, &v14);
    v15 = nullptr;
    v16 = 0;
    if ( v14 )
    {
      v4 = 7;
      v5 = 6;
      v6 = "Commit";
    }
    else
    {
      v4 = 9;
      v5 = 8;
      v6 = "Revision";
    }
    v7 = (_QWORD *)qvector_reserve(&v15, 0, v4, 1);
    v15 = v7;
    *(_QWORD *)&v16 = v4;
    if ( (unsigned int)v5 >= 8 )
    {
      v8 = (unsigned __int64)(v7 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v7 = *(_QWORD *)v6;
      *(_QWORD *)((char *)v7 + v5 - 8) = *(_QWORD *)&v6[v5 - 8];
      v9 = (char *)v7 - v8;
      v10 = (char *)(v6 - v9);
      if ( (((_DWORD)v5 + (_DWORD)v9) & 0xFFFFFFF8) >= 8 )
      {
        v11 = (v5 + (_DWORD)v9) & 0xFFFFFFF8;
        v12 = 0;
        do
        {
          v13 = v12;
          v12 += 8;
          *(_QWORD *)(v8 + v13) = *(_QWORD *)&v10[v13];
        }
        while ( v12 < v11 );
      }
    }
    else
    {
      *(_DWORD *)v7 = *(_DWORD *)v6;
      *(_DWORD *)((char *)v7 + (unsigned int)v5 - 4) = *(_DWORD *)&v6[(unsigned int)v5 - 4];
    }
    *((_BYTE *)v15 + v5) = 0;
    (*(void (__fastcall **)(__int64, __int64, _QWORD **))(*(_QWORD *)a2 + 8LL))(a2, 2, &v15);
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v15, (_BYTE *)&dword_0 + 2);
    }
  }
  return 1;
}
