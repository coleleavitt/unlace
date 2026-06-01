void __fastcall sub_623D20(__m128i *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // rcx
  const char *v4; // rdx
  void *v5; // rbx
  void *v6; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-40h]
  __int64 v8; // [rsp+10h] [rbp-38h]

  clang_getCXTUResourceUsage((__int64)&v6, a1);
  v1 = v8;
  if ( v7 )
  {
    v2 = v8 + 16LL * v7;
    do
    {
      v3 = *(_QWORD *)(v1 + 8);
      switch ( *(_DWORD *)v1 )
      {
        case 1:
          v4 = "ASTContext: expressions, declarations, and types";
          break;
        case 2:
          v4 = "ASTContext: identifiers";
          break;
        case 3:
          v4 = "ASTContext: selectors";
          break;
        case 4:
          v4 = "Code completion: cached global results";
          break;
        case 5:
          v4 = "SourceManager: content cache allocator";
          break;
        case 6:
          v4 = "ASTContext: side tables";
          break;
        case 7:
          v4 = "SourceManager: malloc'ed memory buffers";
          break;
        case 8:
          v4 = "SourceManager: mmap'ed memory buffers";
          break;
        case 9:
          v4 = "ExternalASTSource: malloc'ed memory buffers";
          break;
        case 0xA:
          v4 = "ExternalASTSource: mmap'ed memory buffers";
          break;
        case 0xB:
          v4 = "Preprocessor: malloc'ed memory";
          break;
        case 0xC:
          v4 = "Preprocessor: PreprocessingRecord";
          break;
        case 0xD:
          v4 = "SourceManager: data structures and tables";
          break;
        case 0xE:
          v4 = "Preprocessor: header search tables";
          break;
        default:
          v4 = &byte_3B9466E;
          break;
      }
      v1 += 16;
      fprintf(stderr, "  %s: %lu\n", v4, v3);
    }
    while ( v1 != v2 );
  }
  v5 = v6;
  if ( v6 )
  {
    if ( *(_QWORD *)v6 )
      operator delete(*(void **)v6, *((_QWORD *)v6 + 2) - *(_QWORD *)v6);
    operator delete(v5, 0x18u);
  }
}

