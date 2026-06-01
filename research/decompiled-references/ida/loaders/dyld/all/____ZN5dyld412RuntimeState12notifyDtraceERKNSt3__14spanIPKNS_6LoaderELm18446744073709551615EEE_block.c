size_t __fastcall ___ZN5dyld412RuntimeState12notifyDtraceERKNSt3__14spanIPKNS_6LoaderELm18446744073709551615EEE_block_invoke(
        __int64 a1,
        unsigned int a2)
{
  __int64 v3; // x9
  __int64 v4; // x8
  char *v5; // x20
  const char *v6; // x0
  size_t result; // x0

  v3 = *(_QWORD *)(a1 + 56) + a2;
  v4 = *(_QWORD *)(a1 + 48) + 80LL * **(_QWORD **)(a1 + 48);
  v5 = (char *)(v4 + 8);
  *(_QWORD *)(v4 + 72) = v3;
  *(_QWORD *)(v4 + 80) = v3;
  v6 = (const char *)dyld4::Loader::leafName(*(dyld4::Loader **)(a1 + 64));
  result = strlcpy(v5, v6, 0x40u);
  ++**(_QWORD **)(a1 + 48);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 64) + 4LL) & 0x20) == 0 )
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = 1;
  return result;
}
