__int64 __fastcall reg_delete_subkey(const char *a1)
{
  unsigned int v1; // ebp
  _DWORD *v3; // r12
  int v4; // eax
  int v5; // eax
  __int64 v6; // rdi
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  int v8[2]; // [rsp+18h] [rbp-20h]

  *(_QWORD *)v8 = __readfsqword(0x28u);
  if ( a1 )
  {
    v1 = 0;
    if ( *a1 )
    {
      ptr[0] = nullptr;
      sub_830BD0((__int64)ptr, nullptr, nullptr, 3);
      v3 = ptr[0];
      v1 = sub_82E670((unsigned __int8 *)ptr, a1, 0);
      sub_82D040((__int64)v3);
      v4 = v3[1432];
      *((_QWORD *)v3 + 715) = 0;
      if ( v4 )
      {
        v5 = v4 - 1;
        v3[1432] = v5;
        if ( !v5 )
        {
          v6 = (unsigned int)v3[1428];
          if ( (_DWORD)v6 != -1 )
          {
            qclose(v6);
            v3[1428] = -1;
          }
          qmutex_unlock(*(_QWORD *)v3);
        }
      }
    }
  }
  else
  {
    return 0;
  }
  return v1;
}

