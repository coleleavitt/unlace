/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002C980
// Address: 0x000000010002C980

//----- (000000010002C980) ----------------------------------------------------
__int64 __fastcall sub_10002C980(__int64 a1, const char *a2)
{
  unsigned __int64 v2; // rax
  char v3; // r15
  __int64 v4; // r14
  void *v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  int v8; // [rsp+Ch] [rbp-24h] BYREF

  v2 = sub_10002A980((__int64 *)a1, a2, &v8);
  switch ( v8 )
  {
    case 1:
      v3 = -7;
      goto LABEL_5;
    case 2:
      v3 = -8;
      goto LABEL_5;
    case 3:
      v3 = -6;
LABEL_5:
      sub_100026E20(a1, v2);
      v4 = *(_QWORD *)(a1 + 200);
      v5 = *(void **)v4;
      v6 = *(_QWORD *)(v4 + 8);
      if ( *(_QWORD *)(v4 + 16) < (unsigned __int64)(v6 + 1) )
      {
        v5 = qvector_reserve(*(_QWORD *)(a1 + 200), v5, v6 + 1, 1u);
        *(_QWORD *)v4 = v5;
        v6 = *(_QWORD *)(v4 + 8);
      }
      *((_BYTE *)v5 + v6) = v3;
      ++*(_QWORD *)(v4 + 8);
      ++*(_DWORD *)(a1 + 208);
      result = 0;
      break;
    default:
      set_qerrno();
      set_error_string(0, a2);
      result = set_qerrno();
      break;
  }
  return result;
}
