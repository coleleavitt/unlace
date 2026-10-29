__int64 __fastcall sub_90F5C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdx
  void *v13; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 16);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v14 = v4;
  v13 = *(void **)v3;
  sub_A1A5E0(v2, 16);
  v5 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v6 = sub_9E26A0(a1, a2, v5);
  if ( (_BYTE)v6 )
  {
    v7 = *(_QWORD *)(v5 + 24);
    if ( *(_DWORD *)(v5 + 48)
      || v7 && *(_DWORD *)(v5 + 32) && (sub_A1DB00(v5), sub_A1C490(v5), v7 = *(_QWORD *)(v5 + 24), *(_DWORD *)(v5 + 48)) )
    {
      v8 = *(_QWORD *)v5;
    }
    else
    {
      v11 = sub_8E5480(v5);
      v8 = *(_QWORD *)v5;
      if ( *(_BYTE *)(v11 + 51) )
      {
        v12 = *(unsigned int *)(v5 + 32);
        v9 = v7 + v12 + 72;
        if ( v12 == v8 )
        {
LABEL_8:
          if ( *(_DWORD *)(v9 + 8) <= 0x40u && v14 <= 0x40 )
          {
            *(_QWORD *)v9 = v13;
            *(_DWORD *)(v9 + 8) = v14;
          }
          else
          {
            sub_2585EA0(v9, &v13);
          }
          goto LABEL_11;
        }
      }
    }
    v9 = v7 + v8 + 40;
    goto LABEL_8;
  }
LABEL_11:
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  return v6;
}

