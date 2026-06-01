__int64 __fastcall sub_626A60(_BYTE *a1, __int64 a2, unsigned __int8 a3, __int16 a4, double a5, double a6)
{
  unsigned int v8; // ebx
  __int64 v10; // r13
  void *v11; // rbp
  void *ptr[4]; // [rsp+0h] [rbp-14D8h] BYREF
  _QWORD v13[10]; // [rsp+20h] [rbp-14B8h] BYREF
  __int128 v14; // [rsp+70h] [rbp-1468h]
  void *v15; // [rsp+80h] [rbp-1458h]
  __int128 v16; // [rsp+88h] [rbp-1450h]
  _BYTE v17[4096]; // [rsp+98h] [rbp-1440h] BYREF
  char v18; // [rsp+1098h] [rbp-440h]
  char v19[1032]; // [rsp+10A0h] [rbp-438h] BYREF
  unsigned __int64 v20; // [rsp+14A8h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( (unsigned int)getinf(5) == 2 )
    {
      v11 = (void *)open_linput(a2, a3);
      v8 = sub_6268F0(a1, (__int64)v11, a5, a6);
      close_linput(v11);
    }
    else
    {
      sub_624DD0((__int64)v19, 1024);
      sub_623220((__int64)ptr);
      if ( v19[0] )
      {
        v10 = open_linput(a2, a3);
        if ( v10 )
        {
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1480LL) + 2624LL) = a4;
          if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 1480LL) + 2625LL) & 2) != 0 )
            a1[9] = 1;
          sub_6241C0((__int64)a1, v10, v19);
        }
      }
      v8 = 0;
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
    v13[0] = 0;
    v18 = 1;
    v15 = nullptr;
    v17[0] = 0;
    v14 = 0;
    v16 = 0;
    sub_624DD0((__int64)v17, 4096);
    v8 = sub_6237A0(v13, (__int64)v17);
    if ( (_BYTE)v8 )
    {
      v8 = 0;
      if ( !*((_QWORD *)&v14 + 1) )
        v8 = *(_DWORD *)(v14 + 4) & 1;
    }
    if ( v18 && v13[0] )
    {
      if ( (debug & 0x10) != 0 )
        sub_383DA0();
      free_dll(v13);
    }
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v15);
    }
    if ( *((_QWORD *)&v14 + 1) )
      --*(_DWORD *)(*((_QWORD *)&v14 + 1) + 12LL);
  }
  return v8;
}

