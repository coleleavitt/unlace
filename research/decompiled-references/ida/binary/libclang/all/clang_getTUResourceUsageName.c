const char *__fastcall clang_getTUResourceUsageName(__int64 a1)
{
  const char *result; // rax

  switch ( a1 )
  {
    case 1LL:
      result = "ASTContext: expressions, declarations, and types";
      break;
    case 2LL:
      result = "ASTContext: identifiers";
      break;
    case 3LL:
      result = "ASTContext: selectors";
      break;
    case 4LL:
      result = "Code completion: cached global results";
      break;
    case 5LL:
      result = "SourceManager: content cache allocator";
      break;
    case 6LL:
      result = "ASTContext: side tables";
      break;
    case 7LL:
      result = "SourceManager: malloc'ed memory buffers";
      break;
    case 8LL:
      result = "SourceManager: mmap'ed memory buffers";
      break;
    case 9LL:
      result = "ExternalASTSource: malloc'ed memory buffers";
      break;
    case 10LL:
      result = "ExternalASTSource: mmap'ed memory buffers";
      break;
    case 11LL:
      result = "Preprocessor: malloc'ed memory";
      break;
    case 12LL:
      result = "Preprocessor: PreprocessingRecord";
      break;
    case 13LL:
      result = "SourceManager: data structures and tables";
      break;
    case 14LL:
      result = "Preprocessor: header search tables";
      break;
    default:
      result = &byte_3B9466E;
      break;
  }
  return result;
}

