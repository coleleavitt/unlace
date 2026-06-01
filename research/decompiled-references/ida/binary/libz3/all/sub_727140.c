__int64 __fastcall sub_727140(std::chrono::_V2::steady_clock *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  double v5; // [rsp+8h] [rbp-20h]

  v2 = *((_QWORD *)a1 + 4);
  if ( *(_BYTE *)(v2 + 56) )
  {
    *(_QWORD *)(v2 + 48) += std::chrono::_V2::steady_clock::now(a1) - *(_QWORD *)(v2 + 40);
    *(_BYTE *)(v2 + 56) = 0;
    v4 = std::chrono::_V2::steady_clock::now(a1);
    *(_BYTE *)(v2 + 56) = 1;
    *(_QWORD *)(v2 + 40) = v4;
  }
  v5 = (double)(int)(*(_QWORD *)(v2 + 48) / 1000000LL) / 1000.0;
  sub_18183E0(a2, "sls restarts", *(unsigned int *)(v2 + 8));
  sub_18183E0(a2, "sls full evals", *(unsigned int *)(v2 + 12));
  sub_18183E0(a2, "sls incr evals", *(unsigned int *)(v2 + 16));
  if ( v5 > 0.0 )
  {
    if ( *(_DWORD *)(v2 + 16) )
    {
      sub_1818270(a2, "sls incr evals/sec");
      if ( !*(_DWORD *)(v2 + 20) )
        goto LABEL_6;
    }
    else if ( !*(_DWORD *)(v2 + 20) )
    {
      goto LABEL_6;
    }
    sub_1818270(a2, "sls moves/sec");
  }
LABEL_6:
  sub_18183E0(a2, "sls FLIP moves", *(unsigned int *)(v2 + 24));
  sub_18183E0(a2, "sls INC moves", *(unsigned int *)(v2 + 28));
  sub_18183E0(a2, "sls DEC moves", *(unsigned int *)(v2 + 32));
  sub_18183E0(a2, "sls INV moves", *(unsigned int *)(v2 + 36));
  return sub_18183E0(a2, "sls moves", *(unsigned int *)(v2 + 20));
}

