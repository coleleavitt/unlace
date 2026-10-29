__int64 __fastcall sub_766D10(__int64 a1, const char *a2)
{
  unsigned int v2; // eax
  char v4; // r12
  __int64 *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  int v9; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v2 = sub_765DE0((_QWORD *)a1, a2, &v9);
  switch ( v9 )
  {
    case 0:
      set_qerrno(53, a2);
      goto LABEL_3;
    case 1:
      v4 = -7;
      goto LABEL_7;
    case 2:
      v4 = -8;
      goto LABEL_7;
    case 3:
      v4 = -6;
LABEL_7:
      sub_7655E0(a1, v2);
      v5 = *(__int64 **)(a1 + 192);
      v6 = v5[1];
      v7 = *v5;
      if ( v5[2] < (unsigned __int64)(v6 + 1) )
      {
        v8 = qvector_reserve(*(_QWORD *)(a1 + 192), v7, v6 + 1, 1);
        *v5 = v8;
        v7 = v8;
        v6 = v5[1];
      }
      *(_BYTE *)(v7 + v6) = v4;
      ++v5[1];
      ++*(_DWORD *)(a1 + 200);
      return 0;
    case 6:
      set_qerrno(1565, a2);
      goto LABEL_3;
    default:
      set_qerrno(1564, a2);
LABEL_3:
      set_error_string();
      return set_qerrno(53, a2);
  }
}

