__int64 __fastcall sub_48550(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rdx
  unsigned int v4; // ebx
  struct _Unwind_Exception *v6; // rbx
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v2 = *(unsigned int *)(a2 + 232);
  v9 = __readfsqword(0x28u);
  if ( !(_DWORD)v2 )
    goto LABEL_5;
  if ( !*(_BYTE *)(a2 + 248) )
  {
    v6 = (struct _Unwind_Exception *)sub_30AC0();
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree(v7);
    }
    _Unwind_Resume(v6);
  }
  if ( v2 < *(_QWORD *)(a2 + 120) )
    v3 = *(_QWORD *)(a2 + 112) + (v2 << 6);
  else
LABEL_5:
    v3 = 0;
  v7 = 0;
  v8 = 0;
  sub_48170((__int64 *)(a2 + 80), &v7, v3);
  v4 = sub_47700((void **)(a1 + 536), (__int64)&v7);
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  return v4;
}

