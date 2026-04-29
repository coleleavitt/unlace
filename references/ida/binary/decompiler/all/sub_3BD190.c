unsigned __int64 __fastcall sub_3BD190(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // r8d
  int v6; // r9d
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( a2 )
  {
    v2 = *(_QWORD *)(a1 + 872);
    v3 = a2;
  }
  else
  {
    v8 = sub_385720(a1);
    v2 = *(_QWORD *)(a1 + 872);
    v3 = v8;
    if ( !v8 )
    {
      *(_DWORD *)(v2 + 8) = 0;
      *(_QWORD *)(v2 + 16) = 0;
      return v14 - __readfsqword(0x28u);
    }
    *(_QWORD *)(a1 + 880) = v8;
  }
  *(_QWORD *)(v2 + 24) = sub_3880B0(v3);
  v4 = sub_388F20(v3 + 80);
  if ( v4 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_QWORD *)(v2 + 16) = v4;
  }
  else
  {
    v13 = 0;
    v9 = sub_388BD0((int)v3 + 80, 0, (unsigned int)&v13, 0, v5, v6);
    if ( v9 == -1 )
    {
      v12 = sub_388F60(v3 + 80);
      if ( v12 == -1 )
      {
        if ( *(_DWORD *)(v3 + 80) == 1 && *(_DWORD *)(*(_QWORD *)(v3 + 88) + 8LL) == 68 )
        {
          *(_QWORD *)(v2 + 16) = 0;
          *(_DWORD *)(v2 + 8) = 5;
        }
        else
        {
          *(_QWORD *)(v2 + 16) = 0;
          *(_DWORD *)(v2 + 8) = 4;
        }
      }
      else
      {
        *(_DWORD *)(v2 + 8) = 3;
        *(_QWORD *)(v2 + 16) = v12;
      }
    }
    else
    {
      v10 = v13;
      v11 = *(_QWORD *)(v2 + 32);
      *(_DWORD *)(v2 + 16) = v9;
      *(_DWORD *)(v2 + 8) = 2;
      v13 = v11;
      *(_QWORD *)(v2 + 32) = v10;
    }
    clear_tinfo_t();
  }
  return v14 - __readfsqword(0x28u);
}
