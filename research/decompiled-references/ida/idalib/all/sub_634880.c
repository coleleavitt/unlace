__int64 __fastcall sub_634880(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rbp
  int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // r12d
  int v9; // eax
  unsigned int v10; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  void *ptr; // [rsp+0h] [rbp-488h] BYREF
  __int128 v17; // [rsp+8h] [rbp-480h]
  __int64 v18; // [rsp+20h] [rbp-468h] BYREF
  __int64 v19; // [rsp+28h] [rbp-460h]
  __int64 v20; // [rsp+30h] [rbp-458h]
  _BYTE v21[1032]; // [rsp+40h] [rbp-448h] BYREF
  unsigned __int64 v22; // [rsp+448h] [rbp-40h]

  v5 = qword_2B34D20;
  v6 = 0;
  v22 = __readfsqword(0x28u);
  do
  {
    while ( 1 )
    {
      v8 = v6;
      if ( v6 == 70 )
      {
        v5 += 8;
        v6 = 71;
        sub_422620((__int64)a1);
        v8 = 71;
      }
      else if ( v6 == 83 )
      {
        v5 += 8;
        v6 = 84;
        sub_4F3810(a1);
        v8 = 84;
      }
      v9 = *((_DWORD *)v5 + 14);
      if ( (v9 & 1) == 0 )
        break;
      ++v6;
      v5 += 8;
      v10 = getinf(v8);
      setinf(v8, v10);
      if ( v6 == 100 )
        return 1;
    }
    if ( (v9 & 6) != 0 )
    {
      v7 = getinf_buf(v8, v21, 1024);
      if ( v7 > 0 )
        setinf_buf(v8, v21, v7);
    }
    else if ( (v9 & 8) != 0 )
    {
      v12 = *a1;
      ptr = nullptr;
      v17 = 0;
      v18 = v12;
      v13 = v12 + 640;
      if ( v12 )
      {
        v14 = *(_QWORD *)(v12 + 1520);
        v20 = v13;
        v19 = v14;
      }
      else
      {
        v19 = -1;
        v20 = 640;
      }
      v15 = sub_631050(&v18, (__int64)v5, &ptr, a4, a5);
      if ( v15 > 0 )
        setinf_buf(v8, ptr, v15);
      if ( ptr )
      {
        *(_QWORD *)&v17 = 0;
        qfree(ptr);
      }
    }
    ++v6;
    v5 += 8;
  }
  while ( v6 != 100 );
  return 1;
}
