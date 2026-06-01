__int64 __fastcall sub_579770(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // eax
  unsigned int v5; // ebp
  __int128 *v6; // rbx
  __int64 v8; // [rsp+0h] [rbp-458h] BYREF
  int v9; // [rsp+8h] [rbp-450h]
  __int128 v10; // [rsp+10h] [rbp-448h] BYREF
  _BYTE v11[1032]; // [rsp+20h] [rbp-438h] BYREF
  unsigned __int64 v12; // [rsp+428h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v8 = 0;
  v10 = 0;
  func_tail_iterator_set(&v8, a2, -1);
  v3 = v8;
  if ( v8 )
  {
    v4 = *(_DWORD *)(v8 + 128);
    v9 = 0;
    v5 = 0;
    if ( v4 <= 0 )
    {
LABEL_11:
      lock_func_range(v3, 0);
    }
    else
    {
      while ( 1 )
      {
        if ( !v5 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
          v3 = v8;
        }
        v6 = (__int128 *)v3;
        if ( v3 )
        {
          if ( v9 >= 0 && v9 < *(_DWORD *)(v3 + 128) )
            v6 = (__int128 *)(*(_QWORD *)(v3 + 136) + 16LL * v9);
        }
        else
        {
          v6 = &v10;
        }
        ea2str(v11, 1024, *(_QWORD *)v6);
        sub_3804E0(a1, (__int64)&unk_2340B48, *(_QWORD *)v6, v11, 8, *((_QWORD *)v6 + 1) - *(_QWORD *)v6);
        v3 = v8;
        ++v5;
        if ( !v8 )
          break;
        if ( v9 + 1 >= *(_DWORD *)(v8 + 128) )
          goto LABEL_11;
        ++v9;
      }
    }
  }
  else
  {
    return 0;
  }
  return v5;
}
