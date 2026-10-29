__int64 __fastcall sub_10DCFF0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // r12
  const char **v6; // rax
  char *v7; // r13
  size_t v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  bool v11; // zf
  signed __int64 v12; // [rsp+8h] [rbp-B0h]
  void *v13[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int8 *v15[17]; // [rsp+30h] [rbp-88h] BYREF

  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v4 = sub_10DCD30(a2, 0x779u);
  if ( !v4 )
    goto LABEL_8;
  v5 = v4;
  v6 = *(const char ***)(v4 + 48);
  v7 = (char *)*v6;
  if ( *v6 )
  {
    v8 = j__strlen(*v6);
    if ( v8 == 4 )
    {
      if ( *(_DWORD *)v7 == 1752392040 )
      {
        *(_DWORD *)a1 = 0;
        goto LABEL_8;
      }
      if ( *(_DWORD *)v7 == 1701736302 )
      {
        *(_DWORD *)a1 = 3;
        goto LABEL_8;
      }
    }
    else if ( v8 == 6 && *(_DWORD *)v7 == 1684955506 && *((_WORD *)v7 + 2) == 28015 )
    {
      *(_DWORD *)a1 = 1;
      goto LABEL_8;
    }
  }
  else
  {
    v8 = 0;
  }
  *(_DWORD *)a1 = 4;
  v12 = v8;
  sub_FC70B0((__int64)v15, *a3, 0, 400);
  sub_21B5FF0(v13, v5, a2);
  sub_AEC220(v15, (_BYTE *)v13[0], (signed __int64)v13[1]);
  sub_AEC220(v15, v7, v12);
  if ( v13[0] != &v14 )
    operator delete(v13[0]);
  sub_AEA040((__int64)v15);
LABEL_8:
  result = sub_21B7BC0(a2, 244, &byte_22F0C30, 0);
  *(_QWORD *)(a1 + 16) = v10;
  v11 = *(_QWORD *)(a1 + 16) == 0;
  *(_QWORD *)(a1 + 8) = result;
  if ( !v11 )
    *(_DWORD *)a1 = 2;
  return result;
}
