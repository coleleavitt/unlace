__int64 __fastcall sub_6F32F0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r15
  _DWORD *v3; // rax
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v9; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+8h] [rbp-B0h]
  void *v11; // [rsp+28h] [rbp-90h]
  _BYTE v12[8]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v13; // [rsp+48h] [rbp-70h]
  void *ptr; // [rsp+68h] [rbp-50h]

  sub_167F5F0(&v9, a1);
  sub_167F5B0(v12, a1);
  while ( 1 )
  {
    v4 = sub_167E490(&v9, v12);
    if ( !(_BYTE)v4 )
    {
      if ( ptr )
        sub_186B220(ptr);
      if ( v13 )
        sub_186B220((void *)(v13 - 8));
      if ( v11 )
        sub_186B220(v11);
      if ( v10 )
        goto LABEL_14;
      return v4;
    }
    v5 = sub_167E460(&v9);
    v6 = *a2;
    v7 = v5;
    if ( *(_QWORD *)(*(_QWORD *)(v6 + 8) + 64LL) == sub_15D1F10(v5) )
      break;
    v2 = *a2;
    v3 = *(_DWORD **)(sub_15D1F10(v7) + 24);
    if ( v3 )
    {
      if ( *(_DWORD *)(v2 + 24) == *v3 && !v3[1] )
        break;
    }
    sub_167EA90(&v9);
  }
  if ( ptr )
    sub_186B220(ptr);
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  if ( v11 )
    sub_186B220(v11);
  if ( v10 )
LABEL_14:
    sub_186B220((void *)(v10 - 8));
  return v4;
}

