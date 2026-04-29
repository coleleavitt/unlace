unsigned __int64 __fastcall sub_3BA9A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( a2 )
  {
    v2 = *(_QWORD *)(a1 + 880);
    v3 = a2;
  }
  else
  {
    v6 = sub_382340(a1);
    v2 = *(_QWORD *)(a1 + 880);
    v3 = v6;
    if ( !v6 )
    {
      *(_DWORD *)(v2 + 8) = 0;
      *(_QWORD *)(v2 + 16) = 0;
      return v12 - __readfsqword(0x28u);
    }
    *(_QWORD *)(a1 + 888) = v6;
  }
  *(_QWORD *)(v2 + 24) = sub_384FB0(v3);
  v4 = sub_385E20(v3 + 80);
  if ( v4 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_QWORD *)(v2 + 16) = v4;
  }
  else
  {
    v11 = 0;
    v7 = sub_385AD0(v3 + 80, nullptr, &v11, nullptr);
    if ( v7 == -1 )
    {
      v10 = sub_385E60(v3 + 80);
      if ( v10 == -1 )
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
        *(_QWORD *)(v2 + 16) = v10;
      }
    }
    else
    {
      v8 = v11;
      v9 = *(_QWORD *)(v2 + 32);
      *(_DWORD *)(v2 + 16) = v7;
      *(_DWORD *)(v2 + 8) = 2;
      v11 = v9;
      *(_QWORD *)(v2 + 32) = v8;
    }
    clear_tinfo_t(&v11);
  }
  return v12 - __readfsqword(0x28u);
}
