__int64 __fastcall sub_643D30(_BYTE *a1, __int64 a2, unsigned __int8 a3, __int16 a4)
{
  unsigned int v6; // ebx
  __int64 v8; // r13
  void *v9; // rbp
  void *ptr[4]; // [rsp+0h] [rbp-14D8h] BYREF
  _QWORD v11[10]; // [rsp+20h] [rbp-14B8h] BYREF
  __int128 v12; // [rsp+70h] [rbp-1468h]
  void *v13; // [rsp+80h] [rbp-1458h]
  __int128 v14; // [rsp+88h] [rbp-1450h]
  _BYTE v15[4096]; // [rsp+98h] [rbp-1440h] BYREF
  char v16; // [rsp+1098h] [rbp-440h]
  char v17[1032]; // [rsp+10A0h] [rbp-438h] BYREF
  unsigned __int64 v18; // [rsp+14A8h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( (unsigned int)getinf(5) == 2 )
    {
      v9 = (void *)open_linput(a2, a3);
      v6 = sub_643BC0(a1, (__int64)v9);
      close_linput(v9);
    }
    else
    {
      sub_642030((__int64)v17, 1024);
      sub_640490((__int64)ptr);
      if ( v17[0] )
      {
        v8 = open_linput(a2, a3);
        if ( v8 )
        {
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1672LL) + 2824LL) = a4;
          if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 1672LL) + 2825LL) & 2) != 0 )
            a1[9] = 1;
          sub_641430((__int64)a1, v8, v17);
        }
      }
      v6 = 0;
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
      }
    }
  }
  else if ( (unsigned int)getinf(5) == 2 )
  {
    return 1;
  }
  else
  {
    v11[0] = 0;
    v16 = 1;
    v13 = nullptr;
    v15[0] = 0;
    v12 = 0;
    v14 = 0;
    sub_642030((__int64)v15, 4096);
    v6 = sub_640A20(v11, (__int64)v15);
    if ( (_BYTE)v6 )
    {
      v6 = 0;
      if ( !*((_QWORD *)&v12 + 1) )
        v6 = *(_DWORD *)(v12 + 4) & 1;
    }
    if ( v16 && v11[0] )
    {
      if ( (debug & 0x10) != 0 )
        sub_3879F0();
      free_dll(v11);
    }
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree(v13);
    }
    if ( *((_QWORD *)&v12 + 1) )
      --*(_DWORD *)(*((_QWORD *)&v12 + 1) + 12LL);
  }
  return v6;
}
